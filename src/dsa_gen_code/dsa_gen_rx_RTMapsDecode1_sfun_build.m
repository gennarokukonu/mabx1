% Initialize Legacy Code Tool

def_RTMapsDecode1               = legacy_code('initialize');
def_RTMapsDecode1.SFunctionName = 'dsa_gen_rx_RTMapsDecode1_sfun';
def_RTMapsDecode1.SourceFiles   = {'dsa_gen_rx_RTMapsDecode1.c'};
def_RTMapsDecode1.HeaderFiles   = {'dsa_gen_rx_RTMapsDecode1.h'};
def_RTMapsDecode1.SampleTime    = 'inherited';

% Function callbacks
def_RTMapsDecode1.StartFcnSpec     = 'void Init_Rx_RTMapsDecode1()';
def_RTMapsDecode1.OutputFcnSpec    = 'void Update_Rx_RTMapsDecode1(uint8 u1[], uint32 u2, uint32 u3, RTMapsRx_Pos y1[1], int32 y2[1], double y3[1])';
def_RTMapsDecode1.IncPaths         = {  };

% Code generation configuration
def_RTMapsDecode1.Options.outputsConditionallyWritten = true;

% Generate S-Function
legacy_code('sfcn_cmex_generate', def_RTMapsDecode1);

% Compilation
legacy_code('compile', def_RTMapsDecode1, {'-g'});
legacy_code('sfcn_tlc_generate', def_RTMapsDecode1);
legacy_code('rtwmakecfg_generate', def_RTMapsDecode1);
legacy_code('slblock_generate', def_RTMapsDecode1, 'dsa_gen_rx_RTMapsDecode1_sfun_lib');
