function varargout = hash(varargin)
%HashAlgorithm can be one of the following:
% MD2
% MD5
% SHA-1
% SHA-256
% SHA-384
% SHA-512

import('ptc_matlab_lib.*');
pairs = {'Data', cell(0, 1), ...
    'HashAlgorithm', '', ...
    'Salt', ''};
ARGS = parseargs(varargin, pairs);

ARGS.Data = ARGS.Data(:);
ShouldSerialize = false;
if ~iscell(ARGS.Data)
    ShouldSerialize = true;
    ARGS.Data = {ARGS.Data};
end
if ~iscellstr(ARGS.Salt)
    ARGS.Salt = {ARGS.Salt};
end
if numel(ARGS.Salt) == 1
    ARGS.Salt = repmat(ARGS.Salt, size(ARGS.Data));
end
assert(iscellstr(ARGS.Salt), 'ERROR: Invalid data type for salt');
assert(numel(ARGS.Salt) == numel(ARGS.Data), 'ERROR: Invalid number of elements');
for ctr = 1:numel(ARGS.Data)
    if isnumeric(ARGS.Data{ctr}) && ~isa(ARGS.Data{ctr}, 'uint8') || ischar(ARGS.Data{ctr})
        ARGS.Data{ctr} = uint8(ARGS.Data{ctr}(:));
        ARGS.Salt{ctr} = uint8(ARGS.Salt{ctr}(:));
    elseif ~isa(ARGS.Data{ctr}, 'uint8')
        error([mfilename ':' thisfuncname ':InvalidData'], 'Invalid data');
    end
end

Engine = java.security.MessageDigest.getInstance(ARGS.HashAlgorithm);

varargout{1} = cellfun(@(X, Y) hash_helper(Engine, [X(:); Y(:)]), ARGS.Data, ARGS.Salt, 'UniformOutput', false);
if ShouldSerialize
    varargout{1} = char(varargout{1});
end

end

function out = hash_helper(Engine, Data)

if ~isempty(Data)
    Engine.update(Data);
end
out = double(typecast(int8(Engine.digest), 'uint8'));
out = sprintf('%.2x', (out(:)).');

end