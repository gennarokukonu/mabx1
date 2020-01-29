% Initialize Legacy Code Tool

def_RTMapsEncode               = legacy_code('initialize');
def_RTMapsEncode.SFunctionName = 'dsa_gen_tx_RTMapsEncode_sfun';
def_RTMapsEncode.SourceFiles   = {'dsa_gen_tx_RTMapsEncode.c'};
def_RTMapsEncode.HeaderFiles   = {'dsa_gen_tx_RTMapsEncode.h'};
def_RTMapsEncode.SampleTime    = 'inherited';

% Function callbacks
def_RTMapsEncode.StartFcnSpec     = 'void Init_Tx_RTMapsEncode()';
def_RTMapsEncode.OutputFcnSpec    = 'void Update_Tx_RTMapsEncode(RTMapsTX u1[1], uint8 y1[24], uint32 y2[1])';
def_RTMapsEncode.IncPaths         = {  };

% Generate S-Function
legacy_code('sfcn_cmex_generate', def_RTMapsEncode);

% Compilation
legacy_code('compile', def_RTMapsEncode, {'-g'});
legacy_code('sfcn_tlc_generate', def_RTMapsEncode);
legacy_code('rtwmakecfg_generate', def_RTMapsEncode);
legacy_code('slblock_generate', def_RTMapsEncode, 'dsa_gen_tx_RTMapsEncode_sfun_lib');
