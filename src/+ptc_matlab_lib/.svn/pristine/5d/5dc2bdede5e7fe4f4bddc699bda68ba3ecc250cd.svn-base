function out = editfont

%Preferred font list, in the order of preference
preferred_font = {'DejaVu Sans Mono';
    'Consolas'};
tf = ismember(preferred_font, listfonts);
if any(tf)
    out = preferred_font{find(tf, 1)};
else
    out = 'FixedWidth';
end

end