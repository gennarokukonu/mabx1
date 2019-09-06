function PTC_MBDS_StringDisplay_Fcn(DisplayString, BlockSignature)

DisplayString = char(DisplayString(:).');
BlockSignature = char(BlockSignature(:).');

thisObj = getappdata(0, char(BlockSignature(:).'));
idx = find(DisplayString == char(0), 1, 'first') - 1;
if isempty(idx) || idx <= 0
   set(thisObj.Handle, 'DisplayString', DisplayString);
else
   set(thisObj.Handle, 'DisplayString', DisplayString(1:idx));
end

end