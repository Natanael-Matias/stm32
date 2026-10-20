#include <stdint.h>
#include "mem_addr.h" 

typedef struct {
	volatile uint32_t MODER;
	volatile uint32_t OTYPER;
	volatile uint32_t OSPEEDR;
	volatile uint32_t PUPDR;
	volatile uint32_t IRD;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t LCKR;
	volatile uint32_t AFRL;
	volatile uint32_t AFRH;
	volatile uint32_t BRR;
} gpio_reg_t;

#define GPIO_ADDR_BASE		IOPORT_BASE
#define GPIOA_OFFSET		0x0000
#define GPIOB_OFFSET		0x0400
#define GPIOC_OFFSET		0x0800
#define GPIOD_OFFSET		0x0C00
#define GPIOE_OFFSET		0x1000
#define GPIOH_OFFSET		0x1C00

#define GPIOA	((gpio_reg_t*) (GPIO_ADDR_BASE + GPIOA_OFFSET))
#define GPIOB	((gpio_reg_t*) (GPIO_ADDR_BASE + GPIOB_OFFSET))
#define GPIOC	((gpio_reg_t*) (GPIO_ADDR_BASE + GPIOC_OFFSET))
#define GPIOD	((gpio_reg_t*) (GPIO_ADDR_BASE + GPIOD_OFFSET))

