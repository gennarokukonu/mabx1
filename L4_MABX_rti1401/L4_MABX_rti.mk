# =============================================================================
#  Make include file L4_MABX_rti.mk:
#
#   RTI1401 7.10 (02-May-2018)
#   Wed Nov  6 11:22:45 2019
#
#   Copyright 2018, dSPACE GmbH. All rights reserved.
# =============================================================================

# Initialize variables used in blockset makefiles -----------------------------

BLOCKSET_LIBS     :=
BLOCKSET_SRCS     :=
BLOCKSET_INCLUDES :=

# Default rules for additional blocksets --------------------------------------

blockset_init          :
blockset_clean         :
blockset_deps          :
blockset_after_linkage :

# Includes for additional blocksets -------------------------------------------

%include "$(DSPACE_ROOT)\matlab\rtican\c\rtican.mk"


# Model-specific options ------------------------------------------------------

# Additional C source files declared by the model
MDL_CUSTOM_C_SRCS = rti_assert.c dsethnetif.c etharp.c sys_arch.c err.c init.c mem.c memp.c netif.c pbuf.c stats.c raw.c udp.c tcp.c tcp_in.c tcp_out.c timers.c icmp.c inet.c ip.c ip_addr.c ip_frag.c inet_chksum.c rtican_err1.c rtican_tools1.c rtiethxcp.c

# Additional assembler source files declared by the model
MDL_CUSTOM_ASM_SRCS =

# Additional libraries declared by the model
MDL_CUSTOM_LIBS = \
  "$(DSPACE_ROOT)\DS1401\RTPython\dsrtt1401.lib" \
  "$(DSPACE_ROOT)\DS1401\RTCP\RTIEthXCP.lib"

# Additional objects declared by the model
MDL_CUSTOM_OBJS =

# Directories where additional C and assembler source files are stored
MDL_CUSTOM_SRCS_DIR = \
  "C:\Program Files\dSPACE Solution Release 2018-A\dSPACE RTMaps Interface Blockset 18.1\MATLAB\TCPIP_Blockset\lwIP\src\netif\" \
  "C:\Program Files\dSPACE Solution Release 2018-A\dSPACE RTMaps Interface Blockset 18.1\MATLAB\TCPIP_Blockset\lwIP\src\arch\" \
  "C:\Program Files\dSPACE Solution Release 2018-A\dSPACE RTMaps Interface Blockset 18.1\MATLAB\TCPIP_Blockset\lwIP\src\api\" \
  "C:\Program Files\dSPACE Solution Release 2018-A\dSPACE RTMaps Interface Blockset 18.1\MATLAB\TCPIP_Blockset\lwIP\src\core\" \
  "C:\Program Files\dSPACE Solution Release 2018-A\dSPACE RTMaps Interface Blockset 18.1\MATLAB\TCPIP_Blockset\lwIP\src\core\ipv4"

# Directories where additional header files are stored
MDL_CUSTOM_INCLUDES_PATH = \
  "$(DSPACE_ROOT)\DS1401\RTPython" \
  "C:\Program Files\dSPACE Solution Release 2018-A\dSPACE RTMaps Interface Blockset 18.1\MATLAB\TCPIP_Blockset\lwIP\src\include" \
  "C:\Program Files\dSPACE Solution Release 2018-A\dSPACE RTMaps Interface Blockset 18.1\MATLAB\TCPIP_Blockset\lwIP\src\include\ipv4" \
  "$(DSPACE_ROOT)\DS1401\RTCP"

# Dependencies declared by the model
L4_MABX.$(OBJ_EXT) :"rtican_include.h" 

# Define build type information
BUILDTYPE = RTI

# EOF -------------------------------------------------------------------------
