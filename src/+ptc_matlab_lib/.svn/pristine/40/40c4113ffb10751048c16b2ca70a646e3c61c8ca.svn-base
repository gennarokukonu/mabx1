function [out, BlockHandle] = is_sl_block_present(BlockPath)

try
   BlockHandle = get_param(BlockPath, 'Handle');
   out = true;
catch
   out = false;
   BlockHandle = [];
end

end