/************************ dSPACE target specific file ************************/

#include <brtenv.h>
#include <mqueue.h>
#include <mpipe.h>
#include <xcp_prot_api.h>
#include <xcp_eth_cfg.h>

/* Function prototypes */
extern void custom_xcp_eth_init(unsigned int service_no);
extern int custom_xcp_eth_packet_receive(unsigned int service_no, UInt8 *data,
  UInt16 *length);
extern int custom_xcp_eth_packet_send(unsigned int service_no, UInt8 *data,
  UInt16 length);

/* EOF */
