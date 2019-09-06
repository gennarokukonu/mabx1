function varargout = settings(inputCategoryName, inputIdentifierName, varargin)
%SETTINGS: Function to read custom settings.
%   SYNTAX:
%   VALUE = SETTINGS(<Category>, <Identifier>)
%   e.g. value = Settings('GENERAL', 'Main_Directory'). Environment
%   variables in the output are evaluated before being returned.
%
%   e.g. Settings('GENERAL', 'Main_Directory', 'SettingsSource', <DOM
%   Node>): Optionally the DOM node for the settings file can be specified
%   instead.

import('ptc_matlab_lib.*');

pairs = {'SettingsSource', getenv_matlab('ENV_VAR_SETTINGS_SOURCE')};
parseargs(varargin, pairs);

if isa(SettingsSource, 'org.apache.xerces.dom.DeferredDocumentImpl')
    DOM_NODE = SettingsSource;
else
    error([mfilename ':' thisfuncname ':InvalidSettingsSource'], 'The settings source has to be a DOM node.');
end
    
Value = char(DOM_NODE.getElementsByTagName(inputCategoryName).item(0).getElementsByTagName(inputIdentifierName).item(0).getTextContent);

%Treat anything between two % symbols as an
%environment variable
random_string = randstring;
Value = strrep(Value, '%%', random_string);
percent_character_positions = regexp(Value, '%*%');
environment_variable_list = cell(length(percent_character_positions)*0.5, 1);
for ctr = 1:2:length(percent_character_positions)-1
    environment_variable_list{ceil(ctr*0.5)} = Value(percent_character_positions(ctr)+1:percent_character_positions(ctr+1)-1);
end
environment_variable_list = unique(environment_variable_list);
for ctr = 1:length(environment_variable_list)
    val = getenv(environment_variable_list{ctr});
    if ~isempty(val)
        Value = strrep(Value, ['%' environment_variable_list{ctr} '%'], val);
    end
end

%Replace all double percent symbols with a
%single percent symbol
Value = strrep(Value, random_string, '%');
varargout{1} = Value;

end