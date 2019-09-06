% Initialize Legacy Code Tool

def_RTMapsDecode               = legacy_code('initialize');
def_RTMapsDecode.SFunctionName = 'dsa_gen_rx_RTMapsDecode_sfun';
def_RTMapsDecode.SourceFiles   = {'dsa_gen_rx_RTMapsDecode.c'};
def_RTMapsDecode.HeaderFiles   = {'dsa_gen_rx_RTMapsDecode.h'};
def_RTMapsDecode.SampleTime    = 'inherited';

% Function callbacks
def_RTMapsDecode.StartFcnSpec     = 'void Init_Rx_RTMapsDecode()';
def_RTMapsDecode.OutputFcnSpec    = 'void Update_Rx_RTMapsDecode(uint8 u1[], uint32 u2, uint32 u3, RTMapsRX y1[1], int32 y2[1], double y3[1])';
def_RTMapsDecode.IncPaths         = {  };

% Code generation configuration
def_RTMapsDecode.Options.outputsConditionallyWritten = true;

% Generate S-Function
legacy_code('sfcn_cmex_generate', def_RTMapsDecode);

% Compilation
legacy_code('compile', def_RTMapsDecode, {'-g'});
legacy_code('sfcn_tlc_generate', def_RTMapsDecode);
legacy_code('rtwmakecfg_generate', def_RTMapsDecode);
legacy_code('slblock_generate', def_RTMapsDecode, 'dsa_gen_rx_RTMapsDecode_sfun_lib');
