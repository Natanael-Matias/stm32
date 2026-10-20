#define PERIPHERAL_BASE         0x40000000
#define IOPORT_BASE             0x50000000

#define APB1_OFFSET             0x00
#define APB2_OFFSET             0x10000
#define AHB_OFFSET              0X20000

#define APB1_ADDR               (PERIPHERAL_BASE + APB1_OFFSET)
#define APB2_ADDR               (PERIPHERAL_BASE + APB2_OFFSET)
#define APB1_ADDR               (PERIPHERAL_BASE + AHB_OFFSET)

#define PERIPHERAL_CORTEX_M0p   0xE0000000