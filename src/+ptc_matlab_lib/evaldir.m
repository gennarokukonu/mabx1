function OUT = evaldir(IN)
%EVALDIR: Function to evaluate a string or a cell array of strings that
%represent directories which may contain periods (.) or double dot symbols
%(..) and evaluates the string accordingly. This is in response to the
%change in the functionality of the function fullfile in R2015a, where .
%and .. are no longer evaluated.

OUT = cellstr(IN);
for ctr = 1:numel(OUT)
    temp = ptc_matlab_lib.strexplode(OUT{ctr}, filesep);    
    temp(strcmp('.', temp)) = [];
    
    ctr2 = 1;
    while ctr2 <= numel(temp)
        if strcmp(temp{ctr2}, '..')
            temp(ctr2) = [];
            if ctr2 >= 3
                ctr2 = ctr2 - 1;
                temp(ctr2) = [];
                ctr2 = ctr2 - 1;
            end
        end
        ctr2 = ctr2 + 1;
    end
    OUT{ctr} = ptc_matlab_lib.strimplode(temp, filesep);
end

if ischar(IN)
    OUT = OUT{1};
end

end