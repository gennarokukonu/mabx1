function varargout = fieldnames_recursive(varargin)
%FIELDNAMES_RECURSIVE Returns the fieldnames of an input structure
%recursively.
%
%   SYNTAX
%   fields = fieldnames_recursive('Struct', <struct([])>)
%
%   Arguments:
%   'ClassFilter', {}: Specify list of classes that you want included in
%   the output. If left empty, all classes are returned.
%
%   'RegExpFilter', '': Specify regular expression filter for the output. If
%   left empty, no regular expression filter is applied.
%
%   'ShouldExcludeParentFields', false: Specify whether the field names returned
%   should recursively include fields which are parents of other structures.
%   If this argument is set to true, then the field names returned will not
%   correspond to structs.
%
%   See also: fieldnames

import('ptc_matlab_lib.*');

pairs = {'Struct', struct([]), ...
    'ClassFilter', {}, ...
    'RegExpFilter', '', ...
    'ShouldExcludeParentFields', false};
ARGS = parseargs(varargin, pairs);
ARGS.ClassFilter = cellstr(ARGS.ClassFilter);

recfields = fieldnames_recursive_helper(ARGS.Struct);

if ARGS.ShouldExcludeParentFields
    recfields_split = cellfun(@(X) ptc_matlab_lib.strexplode(X, '.'), recfields, 'UniformOutput', false);
    field_vals = cellfun(@(X) getfield(ARGS.Struct, X{:}), recfields_split, 'UniformOutput', false);
    indices_to_exclude = cellfun(@fieldnames_exist, field_vals);
    recfields(indices_to_exclude) = [];
end

if ~isempty(ARGS.ClassFilter)
    recfields_classes = cellfun(@(X) class(eval(['ARGS.Struct.' X])), recfields, 'UniformOutput', false);
    recfields = recfields(ismember(recfields_classes, ARGS.ClassFilter));
end

if ~isempty(ARGS.RegExpFilter)
    recfields = recfields(~cellfun(@isempty, regexp(recfields, ARGS.RegExpFilter, 'once')));
end

varargout{1} = sort(recfields);

end

function varargout = fieldnames_recursive_helper(Struct)

currfields = fieldnames(Struct);

for ctr = 1:length(currfields)
    thisVal = Struct.(currfields{ctr});
    if isstruct(thisVal) && ~isempty(fieldnames(thisVal))
        newfields = feval(ptc_matlab_lib.thisfuncname, thisVal);
        currfields = [currfields; strcat(currfields{ctr}, '.', newfields)]; %#ok<AGROW>
    end
end

varargout{1} = currfields;

end

function out = fieldnames_exist(in)

try
    [~] = fieldnames(in);
    out = true;
catch %#ok<CTCH>
    out = false;
end

end