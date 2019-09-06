function varargout = isodatetime(varargin)
%Representation of time compliant with ISO 8601.
%
%   isodatetime('TimeStamp', <now>, 'TimeZone', <java.util.TimeZone.getDefault>)
clear(mfilename);
pairs = {'TimeStamp', now, ...
    'TimeStampFormat', 'MATLAB', ...
    'TimeZone', ''};
ARGS = ptc_matlab_lib.parseargs(varargin, pairs);

ARGS.TimeZone = strtrim(ARGS.TimeZone);
if isempty(ARGS.TimeZone)
    ARGS.TimeZone = java.util.TimeZone.getDefault;
else
    ARGS.TimeZone = java.util.TimeZone.getTimeZone(ARGS.TimeZone);
end

if ismember(ARGS.TimeStampFormat, {'POSIX'; 'UNIX'})
    ARGS.TimeStamp = (ARGS.TimeStamp + 719529 * 24 * 3600)/(24 * 3600);
end

DateVector = num2cell(datevec(ARGS.TimeStamp) - [1900 1 0 0 0 0]);
DefaultTimeZone = ARGS.TimeZone;

RawOffset_ms = ARGS.TimeZone.getRawOffset;
InDaylightTime = double(ARGS.TimeZone.inDaylightTime(java.util.Date(DateVector{:})));
DSTSavings_ms = InDaylightTime * (ARGS.TimeZone.getDSTSavings);

TotalOffset = RawOffset_ms + DSTSavings_ms;

if ismember(ARGS.TimeStampFormat, {'POSIX'; 'UNIX'})
    ARGS.TimeStamp = ARGS.TimeStamp + TotalOffset / (1000 * 3600 * 24);
end

DefaultRawOffset_ms = DefaultTimeZone.getRawOffset;
InDaylightTime = double(DefaultTimeZone.inDaylightTime(java.util.Date(DateVector{:})));
DefaultDSTSavings_ms = InDaylightTime * (DefaultTimeZone.getDSTSavings);
DefaultTotalOffset = DefaultRawOffset_ms + DefaultDSTSavings_ms;

OffsetToApply_ms = TotalOffset - DefaultTotalOffset;
ARGS.TimeStamp = ARGS.TimeStamp + OffsetToApply_ms / (1000 * 3600 * 24);

if TotalOffset < 0
    thisSign = '-';
else
    thisSign = '+';
end
hrs = num2str(fix(abs(TotalOffset) * 0.001/3600));
if length(hrs) == 1
    hrs = ['0' hrs];
end
mins = num2str(fix(mod(abs(TotalOffset) * 0.001, 3600) / 60));
if length(mins) == 1
    mins = ['0' mins];
end
TotalOffsetStr = [thisSign hrs ':' mins];

DateVector = num2cell(datevec(ARGS.TimeStamp) - [1900 1 0 0 0 0]);

% if ARGS.TimeZone.inDaylightTime(java.util.Date(DateVector{:}))
%     %Add one hour
%     ARGS.TimeStamp = ARGS.TimeStamp + 1/24;
% end

LocalTimeZoneID = char(java.util.TimeZone.getAvailableIDs(RawOffset_ms));
if ~isempty(LocalTimeZoneID)
    LocalTimeZoneID = cellstr(LocalTimeZoneID);
else
    LocalTimeZoneID = {};
end

UTCTimeStamp = ARGS.TimeStamp - TotalOffset / (1000 * 3600 * 24);

out = struct('LocalTimeStamp', {ARGS.TimeStamp}, ...
    'LocalTimeISO8601', {[datestr(ARGS.TimeStamp, 'yyyy-mm-ddTHH:MM:SS.FFF') TotalOffsetStr]}, ...
    'LocalTimeISO8601_Compatible', {[datestr(ARGS.TimeStamp, 'yyyymmddTHHMMSSFFF') strrep(TotalOffsetStr, ':', '')]}, ...
    'LocalTimeZone', {['GMT' TotalOffsetStr]}, ...
    'LocalTimeZoneID', {LocalTimeZoneID}, ...
    'UTCOffset_ms', {TotalOffset}, ...
    'InDaylightTime', {ARGS.TimeZone.inDaylightTime(java.util.Date(DateVector{:}))}, ...
    'UTCTimeStamp', {UTCTimeStamp}, ...
    'UTCTimeStampUnix', {(UTCTimeStamp - 719529) * 24 * 3600}, ...
    'UTCTimeISO8601', {[datestr(UTCTimeStamp, 'yyyy-mm-ddTHH:MM:SS.FFF') '+00:00']}, ...
    'UTCTimeISO8601_Compatible', {[datestr(UTCTimeStamp, 'yyyymmddTHHMMSSFFF') '+0000']}, ...
    'UTCTimeZoneID', {cellstr(char(java.util.TimeZone.getAvailableIDs(0)))});

varargout = {out.LocalTimeISO8601; out};

end