#define PERIPHERAL_BASE         0x40000000
#define IOPORT_BASE             0x50000000

#define APB1_OFFSET             0x00
#define APB2_OFFSET             0x10000
#define AHB_OFFSET              0X20000

#define APB1_ADDR               (PERIPHERAL_BASE + APB1_OFFSET)
#define APB2_ADDR               (PERIPHERAL_BASE + APB2_OFFSET)
#define AHB_ADDR                (PERIPHERAL_BASE + AHB_OFFSET)

#define PERIPHERAL_CORTEX_M0p   0xE0000000

/* gpio offset */
#define GPIOA_OFFSET		0x0000
#define GPIOB_OFFSET		0x0400
#define GPIOC_OFFSET		0x0800
#define GPIOD_OFFSET		0x0C00
#define GPIOE_OFFSET		0x1000
#define GPIOH_OFFSET		0x1C00

/* usart offset */
#define USART1_OFFSET		0x3800
#define USART2_OFFSET		0x4400
#define USART5_OFFSET		0x5000
#define USART4_OFFSET		0x4C00
#define LPUART1_OFFSET      0x4800

/* i2c offset */
#define I2C1_OFFSET         0x5400
#define I2C2_OFFSET         0x5800
#define I2C3_OFFSET 		0x7800

/* timers offset */
#define TIM21_OFFSET        0x0800
#define TIM22_OFFSET        0x1400
#define TIM2_OFFSET         0x0000
#define TIM3_OFFSET         0x0400
#define TIM6_OFFSET         0x1000
#define TIM7_OFFSET         0x1400
#define LPTIM1_OFFSET       0x7C00

/* spi  */
#define SPI1_OFFSET         0x3000
#define SPI2_OFFSET         0x3800


#define SYSCFG_COMP_OFFSET  0x0000
#define EXTI_OFFSET         0x0400
#define CRS_OFFSET          0x6C00
#define FIREWALL_OFFSET     0x1C00
#define ADC1_OFFSET         0x2400
#define USB_OFFSET          0x5C00
#define DBG_OFFSET          0x5800
#define RTC_OFFSET          0x2800
#define WWDG_OFFSET         0x2C00
#define IWDG_OFFSET         0x3000
#define PWR_OFFSET          0x7000
#define DAC1_2_OFFSET       0x7400
#define DMA1_OFFSET         0x0000
#define RCC_OFFSET          0x1000
#define FLASH_OFFSET        0x2000
#define CRC_OFFSET          0x3000
#define TSC_OFFSET          0x4000
#define RNG_OFFSET          0x5000
#define AES_OFFSET          0x6000
#define CSR_OFFSET  		0x0C00
