function show_handle_positions(hndl)
%SHOW_HANDLE_POSITIONS Lists all handle positions of the children of the
%specified handle. If a handle is not specified, it uses the current figure
%(gcf).
%   The format used is:
%   pairs = {'tagname1_position', <position1>, ...
%            'tagname2_position', <position2>, ...
%            ...
%            'tagnameN_position', <positionN>};
%
%This function is useful in building GUIs within an M file

if nargin==0
    hndl = gcf;
end

handle_list = findall(hndl);
position_idx = isprop(handle_list, 'Position');
handle_list = handle_list(position_idx);
handle_tag_list = get(handle_list, 'Tag');
[handle_tag_list, idx] = sort(handle_tag_list);
handle_list = handle_list(idx);

fprintf('\npairs = {');

for ctr = 1:length(handle_list)
    if isprop(handle_list(ctr), 'Position')
        fprintf('%40s, %50s', ['''' handle_tag_list{ctr} ''''], ['[' num2str(get(handle_list(ctr), 'Position')) ']']);
    end
    if ctr < length(handle_list)
        fprintf(', ...\n');
    else
        fprintf('};\n');
    end
end

end