function varargout = trcStructFields( varargin )
%FIELDNAMES_RECURSIVE2 This function is to be used with the result of
%ptc_matlab_lib.trcParsetrcFile2

import('ptc_matlab_lib.*')

pairs = {'trcFileParse',[],...
         'index',1,...
         'label',[]};
ARGS=parseargs(varargin, pairs);
if isempty(ARGS.label)
   ARGS.label.depth=0;
   ARGS.label.group=[];
   ARGS.label.path={};
end
trcFileParseLength=numel(ARGS.trcFileParse);
while(ARGS.index<=trcFileParseLength)
    group_name={};
    end_group={};
    if ischar(ARGS.trcFileParse{ARGS.index})
        % regexp returns match to 'endgroup' followed by any wildcard
        % expression
        end_group=regexp(ARGS.trcFileParse{ARGS.index},'endgroup.*','match');
    elseif isstruct(ARGS.trcFileParse{ARGS.index})
        % For expression 'group "<group_label>"', regexp returns
        % <group_label> where <group_label> is any string of characters.
        group_name=regexp(ARGS.trcFileParse{ARGS.index}.Name,'group "(.*)"','tokens');
    end
    if ~isempty(group_name) || ~isempty(end_group) || isstruct(ARGS.trcFileParse{ARGS.index})
        if ~isempty(group_name)
            % Group
            % save group, add group to hierarchy, increment index,
            % increment depth, recursive call
            ARGS.label.group{end+1}=group_name{:}{:};
            ARGS.label.depth=ARGS.label.depth+1;
            ARGS.index=ARGS.index+1;
            [ARGS.trcFileParse,ARGS.index,ARGS.label]=ptc_matlab_lib.trcStructFields('trcFileParse',ARGS.trcFileParse,...
                                                                                           'index',ARGS.index,'label',ARGS.label);
        elseif ~isempty(end_group)
            % End of Group
            % remove group from hierarchy, increment index, return
            ARGS.index=ARGS.index+1;
            ARGS.label.depth=ARGS.label.depth-1;
            ARGS.label.group=ARGS.label.group(1:end-1);
            varargout{1}=ARGS.trcFileParse;
            varargout{2}=ARGS.index;
            varargout{3}=ARGS.label;
            return;
        else
            % Parameter
            % save parameter, increment index
            if isempty(ARGS.label.group)
                ARGS.label.path{end+1}= {ARGS.trcFileParse{ARGS.index}.Name};
            else
                ARGS.label.path{end+1}= {ARGS.label.group{:} ARGS.trcFileParse{ARGS.index}.Name};
            end
            ARGS.index=ARGS.index+1;
        end
    else
        ARGS.index=ARGS.index+1;
    end
end
% If label.depth==0 then this is the end of the initial (non-recursive)
% call to this function.
if ARGS.label.depth==0
    % Data output for the return to a non-recursive call of this function.
    ARGS.label.path=ARGS.label.path';
    items=numel(ARGS.label.path);
    for n=1:items
        ARGS.label.path{n}=ptc_matlab_lib.strimplode(ARGS.label.path{n},'.');
    end
    varargout{1}=ARGS.label.path;
else
    % Data output for the return to a recursive call of this function.
    varargout{1}=ARGS.trcFileParse;
    varargout{2}=ARGS.index;
    varargout{3}=ARGS.label;
end