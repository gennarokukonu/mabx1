function out = formatstr(str_cell, varargin)
%FORMATSTR Formats a string so that formatting characters get ignored
%
%   FORMATSTR(STR, 'FormatBackslashes', <false>): Can be used to replace
%   backslash ('\') characters with a double backslash ('\\'), if
%   FormatBackslashes is set to true.
%
%   FORMATSTR(STR, 'FormatPercentageSymbols', <false>): Can be used to
%   replace percentage ('%') characters with a double percentage ('%%'), if
%   FormatPercentageSymbols is set to true.
%
%   FORMATSTR(STR, 'FormatNewLines', <false>): Can be used to replace the 
%   sprintf('\n') character with \n, if FormatNewLines is set to true
%
%   FORMATSTR(STR, 'FormatCarriageReturns', <false>): Can be used to replace the 
%   sprintf('\r') character with \r, if FormatCarriageReturns is set to true
%
%   FORMATSTR(STR, 'FormatTabs', <false>): Can be used to replace the 
%   sprintf('\t') character with \t, if FormatTabs is set to true
%
%   FORMATSTR(STR, 'FormatUnderscores', <false>): Can be used to replace
%   underscore ('_') characters with a backslash+underscore ('\_'), if
%   FormatUnderscores is set to true.
%
%   FORMATSTR(STR, 'FormatCarets', <false>): Can be used to replace caret
%   ('^') characters with a backslash+caret ('\^') if FormatCarets is set
%   to true.
%
%   FORMATSTR(STR, 'FormatPeriods', <false>): Can be used to replace period
%   ('.') characters with a backslash+period ('\.') if FormatPeriods is set
%   to true.
%
%   FORMATSTR(STR, 'FormatSingleQuotes', <false>): Can be used to replace
%   single quote characters with two single quotes (''), if
%   FormatSingleQuotes is set to true.
%
%   FORMATSTR(STR, 'FormatFrontSlashes', <false>): Can be used to replace
%   frontslash characters with two frontslashes (//), if
%   FormatFrontSlashes is set to true.
%
%   FORMATSTR(STR, 'FormatDoubleQuotes', <false>): Can be used to replace
%   double quote characters with a backslash followed by double quotes
%   (\"), if FormatDoubleQuotes is set to true.

import('ptc_matlab_lib.*');

pairs = {'FormatBackslashes', false, ...
    'FormatPercentageSymbols', false, ...
	'FormatNewLines', false, ...
	'FormatCarriageReturns', false, ...
    'FormatUnderscores', false, ...
    'FormatCarets', false, ...
    'FormatPeriods', false, ...
    'FormatSingleQuotes', false, ...
    'FormatFrontSlashes', false, ...
    'FormatDoubleQuotes', false, ...
    'FormatAll', false};
ARGS = parseargs(varargin, pairs);

out = str_cell;

if ARGS.FormatAll
    [ARGS.FormatBackslashes, ...
        ARGS.FormatPercentageSymbols, ...
        ARGS.FormatUnderscores, ...
        ARGS.FormatCarets, ...
        ARGS.FormatPeriods, ...
        ARGS.FormatSingleQuotes, ...
        ARGS.FormatFrontSlashes] = deal(true);
end

if ARGS.FormatBackslashes
    out = strrep(out, '\', '\\');
end

if ARGS.FormatPercentageSymbols
    out = strrep(out, '%', '%%');
end

if ARGS.FormatNewLines
	out = strrep(out, sprintf('\n'), '\n');
end

if ARGS.FormatCarriageReturns
	out = strrep(out, sprintf('\r'), '\r');
end

if ARGS.FormatUnderscores
    out = strrep(out, '_', '\_');
end

if ARGS.FormatCarets
    out = strrep(out, '^', '\^');
end

if ARGS.FormatPeriods
    out = strrep(out, '.', '\.');
end

if ARGS.FormatSingleQuotes
    out = strrep(out, '''', '''''');
end

if ARGS.FormatFrontSlashes
    out = strrep(out, '/', '//');
end

if ARGS.FormatDoubleQuotes
    out = strrep(out, '"', '\"');
end

end