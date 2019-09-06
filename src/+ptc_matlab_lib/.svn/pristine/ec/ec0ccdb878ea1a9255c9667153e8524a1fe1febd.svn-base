function outstruct = struct2mhstruct(instruct)
%MATLAB struct to MotoHawk struct
%struct2mhstruct(struct('FALSE', false, 'TRUE', true)) returns
%struct('name', {'FALSE'; 'TRUE'}, 'value', {false; true})

outstruct = struct('name', fieldnames(instruct), 'value', struct2cell(instruct));

end