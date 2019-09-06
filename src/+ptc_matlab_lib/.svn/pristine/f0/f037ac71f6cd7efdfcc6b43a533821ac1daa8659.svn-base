function varargout = limit(varargin)
%limit: Function to limit values in a matrix using both lower and
%upper limits, while preserving the data type.
%
%   limit('InMatrix', <[]>, ...
%       'UpperLimit', <Inf>, ...
%       'LowerLimit', <-Inf>);
%
%   See also: max, min

import('ptc_matlab_lib.*');

pairs = {'InMatrix', [], ...
    'UpperLimit', complex(Inf, Inf), ...
    'LowerLimit', complex(-Inf, -Inf), ...
    'ShouldPerformFloatingPointCorrection', false};
ARGS = parseargs(varargin, pairs);

if isempty(ARGS.UpperLimit)
	ARGS.UpperLimit = complex(Inf, Inf);
end
if isempty(ARGS.LowerLimit)
	ARGS.LowerLimit = complex(-Inf, -Inf);
end

OriginalDataType = class(ARGS.InMatrix);
ARGS.InMatrix = double(ARGS.InMatrix);
ARGS.UpperLimit = double(ARGS.UpperLimit);
ARGS.LowerLimit = double(ARGS.LowerLimit);

if isempty(ARGS.InMatrix)
    varargout{1} = ARGS.InMatrix;
    return;
end

thisInMatrix = ARGS.InMatrix(:);
real_thisInMatrix = real(thisInMatrix);
imag_thisInMatrix = imag(thisInMatrix);
if isscalar(ARGS.UpperLimit)
    ARGS.UpperLimit = ARGS.UpperLimit * ones(size(thisInMatrix));
else
    ARGS.UpperLimit = ARGS.UpperLimit(:);
end
if isscalar(ARGS.LowerLimit)
    ARGS.LowerLimit = ARGS.LowerLimit * ones(size(thisInMatrix));
else
    ARGS.LowerLimit = ARGS.LowerLimit(:);
end

outval_real(~isnan(real_thisInMatrix), 1) = columnvec(max(real_thisInMatrix(~isnan(real_thisInMatrix)), real(ARGS.LowerLimit(~isnan(real_thisInMatrix)))));
outval_real(~isnan(real_thisInMatrix), 1) = columnvec(min(outval_real(~isnan(real_thisInMatrix)), real(ARGS.UpperLimit(~isnan(real_thisInMatrix)))));
outval_real(isnan(real_thisInMatrix), 1) = NaN;

outval_imag(~isnan(imag_thisInMatrix), 1) = columnvec(max(imag_thisInMatrix(~isnan(imag_thisInMatrix)), imag(ARGS.LowerLimit(~isnan(imag_thisInMatrix)))));
outval_imag(~isnan(imag_thisInMatrix), 1) = columnvec(min(outval_imag(~isnan(imag_thisInMatrix)), imag(ARGS.UpperLimit(~isnan(imag_thisInMatrix)))));
outval_imag(isnan(imag_thisInMatrix), 1) = NaN;

varargout{1} = reshape(double(outval_real) + 1i*double(outval_imag), size(ARGS.InMatrix));
varargout{1} = feval(OriginalDataType, varargout{1});

if ARGS.ShouldPerformFloatingPointCorrection && (isa(varargout{1}, 'double') || isa(varargout{1}, 'single'))
    indices_real = real(varargout{1}(:)) > real(ARGS.UpperLimit(:));
    indices_imag = imag(varargout{1}(:)) > imag(ARGS.UpperLimit(:));
    varargout{1}(indices_real) = complex(real(varargout{1}(indices_real)) - eps(-real(varargout{1}(indices_real))), imag(varargout{1}(indices_real)));
    varargout{1}(indices_imag) = complex(real(varargout{1}(indices_imag)), imag(varargout{1}(indices_imag)) - eps(-imag(varargout{1}(indices_imag))));
    
    indices_real = real(varargout{1}(:)) < real(ARGS.LowerLimit(:));
    indices_imag = imag(varargout{1}(:)) < imag(ARGS.LowerLimit(:));
    varargout{1}(indices_real) = complex(real(varargout{1}(indices_real)) + eps(real(varargout{1}(indices_real))), imag(varargout{1}(indices_real)));
    varargout{1}(indices_imag) = complex(real(varargout{1}(indices_imag)), imag(varargout{1}(indices_imag)) + eps(imag(varargout{1}(indices_imag))));
end

end