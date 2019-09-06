/************************ dSPACE target specific file ************************/
#include <rtiethxcp.h>
#define VCM_MID_HMQ_SCK_FIFO           0x1641
#define VCM_TXT_HMQ_SCK_FIFO           "SCK Host Message Queue"

mpipe_address_t *vcm_additonal_mem = NULL;
mpipe_handle_t mpipe;
extern int service_instance_used;
void custom_xcp_eth_init(unsigned int service_no)
{
  static int init_done = 0;
  if (init_done == 0) {
    /* channel_id = Port */
    UInt32 channel_id = 1234;
    vcm_module_descriptor_type *fifo_vcm_ptr;
    fifo_vcm_ptr = vcm_module_register(VCM_MID_HMQ_SCK_FIFO, 0,
      VCM_TXT_HMQ_SCK_FIFO,
      1, 0, 0,
      0, 0, 0,
      0, 0);
    vcm_additonal_mem = (mpipe_address_t*) vcm_cfg_malloc(sizeof(mpipe_address_t));
    if (vcm_additonal_mem == NULL) {
      return;
    }

    memset(vcm_additonal_mem, 0, sizeof(mpipe_address_t));
    vcm_memory_ptr_set(fifo_vcm_ptr, (vcm_cfg_mem_ptr_type)vcm_additonal_mem,
                       sizeof(mpipe_address_t));
    mpipe_create_with_channel_id(
      1500,                            /* message length */
      100,                             /* outbound queue length */
      100,                             /* inbound queue length */
      1,                               /* special flags: 0=Use Host PC ethernet, 1=Use MABX2 On-Board Ethernet */
      0xFFFFFFFF,                      /* board_index does not matter */
      0xFFFFFFFF,                      /* conn_type does not matter */
      &mpipe,
      channel_id);
    mpipe_save_address(mpipe, vcm_additonal_mem);
    init_done = 1;
  }
}

int custom_xcp_eth_packet_receive(unsigned int service_no, UInt8 *data, UInt16
  *length)
{
  long len = 0;
  if (service_no != service_instance_used) {
    return 1;
  }

  if (service_no == 0) {
    len = mpipe_receive(mpipe, data, XCP_ETH_MAX_DTO_0);
  } else {
    len = mpipe_receive(mpipe, data, XCP_ETH_MAX_DTO_1);
  }

  if (len > 0) {
    *length = len;
    return DSXCP_NO_ERROR;
  }

  return 1;
}

int custom_xcp_eth_packet_send(unsigned int service_no, UInt8 *data, UInt16
  length)
{
  if (service_no != service_instance_used) {
    return DSXCP_NO_ERROR;
  }

  if (mpipe_send(mpipe, data, length) > 0) {
    return DSXCP_NO_ERROR;
  }

  return 1;
}

/* EOF */
