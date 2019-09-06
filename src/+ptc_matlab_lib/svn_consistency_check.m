function varargout = svn_consistency_check(varargin)

import('ptc_matlab_lib.*');

pairs = {'SVNROOT', pwd, ...
    'ShowDialog', false, ...
    'ShouldUpdate', false, ...
    'ShouldForceConsistency', false, ...
    'ShouldEcho', false, ...
    'SVNUserName', username, ...
    'SVNPassword', ''};
ARGS = parseargs(varargin, pairs);

ARGS.SVNROOT = evaldir(ARGS.SVNROOT);

if ARGS.ShouldForceConsistency
    status = svn('cleanup', ['"' ARGS.SVNROOT '"@'], '--remove-unversioned', '--remove-ignored', '--quiet', '--include-externals', '--non-interactive', '--no-auth-cache', '--trust-server-cert', '--username', ['"' ARGS.SVNUserName '"'], '--password', ['"' ARGS.SVNPassword '"']);
    if status
        waitfor(msgbox_editable('MessageString', 'ERROR: Cleanup operation failed', 'Color', 'red', 'WindowStyle', 'modal'));
        varargout{1} = false;
        return;
    end
    
    status = svn('revert', ['"' ARGS.SVNROOT '"@'], '--recursive', '--non-interactive', '--no-auth-cache', '--quiet', '--trust-server-cert', '--username', ['"' ARGS.SVNUserName '"'], '--password', ['"' ARGS.SVNPassword '"']);
    if status
        waitfor(msgbox_editable('MessageString', 'ERROR: Revert operation failed', 'Color', 'red', 'WindowStyle', 'modal'));
        varargout{1} = false;
        return;
    end
    
    status = svn('changelist', '--remove', '--depth', 'infinity', ['"' ARGS.SVNROOT '"@'], '--non-interactive', '--no-auth-cache', '--trust-server-cert', '--username', ['"' ARGS.SVNUserName '"'], '--password', ['"' ARGS.SVNPassword '"']);
    if status
        waitfor(msgbox_editable('MessageString', 'ERROR: Changelist removal failed', 'Color', 'red', 'WindowStyle', 'modal'));
        varargout{1} = false;
        return;
    end
end

[~, STR] = svn('status', ['"' ARGS.SVNROOT '"@']);
STR = strexplode(STR, sprintf('\n'));
STR = strtrim(STR);
STR = regexprep(STR, '^Performing status on external item.*', '');
STR = regexprep(STR, 'X\s+.*', '');
STR(cellfun(@isempty, STR)) = [];

varargout{1} = true;
if ~isempty(STR)
    if ARGS.ShowDialog
        [~, result] = svn('status', ['"' ARGS.SVNROOT '"@']);
        waitfor(msgbox_editable('MessageString', {'The following problems were encountered during the SVN check. Please account for all issues before proceeding'; ''; result}, ...
            'Color', 'red', 'WindowStyle', 'modal'));
    end
    varargout{1} = false;
    return;
end

if ARGS.ShouldUpdate
    if isempty(ARGS.SVNUserName) || isempty(ARGS.SVNPassword)
        [ARGS.SVNUserName, ARGS.SVNPassword] = ptc_matlab_lib.uilogin('DefaultUser', ptc_matlab_lib.username, 'FigureParams', {'WindowStyle', 'modal'});
    end
    if isequal(ARGS.SVNUserName, 0) || isequal(ARGS.SVNPassword, 0)
        %Cancel was pressed
        varargout{1} = false;
        return;
    else
        if ARGS.ShouldEcho
            disp([ptc_matlab_lib.isodatetime ' - ' mfilename ' - Running svn update...']);
        end
    end
    
    checkfunc = @(X) (ptc_matlab_lib.is_svn_versioned_file('Path', X) && ...
        (ptc_matlab_lib.svn('cleanup', ['"' X '"@'], '--non-interactive', '--no-auth-cache', '--trust-server-cert', '--username', ['"' ARGS.SVNUserName '"'], '--password', ['"' ARGS.SVNPassword '"']) || ...
        ptc_matlab_lib.svn('update', ['"' X '"@'], '--non-interactive', '--no-auth-cache', '--trust-server-cert', '--username', ['"' ARGS.SVNUserName '"'], '--password', ['"' ARGS.SVNPassword '"'])));
    if checkfunc(ARGS.SVNROOT)
        waitfor(errordlg('ERROR updating from SVN server', 'ERROR', 'modal'));
        varargout{1} = false;
        return;
    end
end

end