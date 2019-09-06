function sl_customization(cm)

cm.LibraryBrowserCustomizer.applyFilter({'PACCAR Technical Center MBDS Library/MBDS Standard Library/Verification/Run-Time Measurement/private', 'Hidden'});
cm.LibraryBrowserCustomizer.applyFilter({'PACCAR Technical Center MBDS Library/MotoHawk', 'Hidden'});
cm.LibraryBrowserCustomizer.applyOrder({'PACCAR Technical Center MBDS Library', -2});

if ismethod(cm.LibraryBrowserCustomizer, 'applyNodePreference')
    cm.LibraryBrowserCustomizer.applyNodePreference({'Simulink', false, 'PACCAR Technical Center MBDS Library', true});
end

end