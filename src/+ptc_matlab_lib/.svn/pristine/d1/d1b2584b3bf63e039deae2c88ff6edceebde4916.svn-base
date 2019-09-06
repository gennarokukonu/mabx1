function out = mfiledir

if ~isdeployed
    stack = dbstack('-completenames');

    if length(stack) >= 2
        out = fileparts(stack(2).file);
    else
        out = '';
    end
else
    out = pwd;
end

end