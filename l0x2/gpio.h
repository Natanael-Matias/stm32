#include <stdint.h>
#include "mem_addr.h" 

typedef enum {
	input,
	output,
	alternate_function,
	analog
} mode_t;

typedef enum {
	push_pull,
	open_drain
} output_type_t;

typedef enum {
	low,
	medium,
	high,
	very_high
} output_speed_t;

typedef enum {
	no_pull,
	up,
	down,
	reserved
} pull_up_down_t;

typedef enum {
	AF0, AF1, AF2, AF3,
	AF4, AF5, AF6, AF7
} alternate_function_t;

typedef union {
	struct {
		uint8_t _0		:1;
		uint8_t _1		:1;
		uint8_t _2		:1;
		uint8_t _3		:1;
		uint8_t _4		:1;
		uint8_t _5		:1;
		uint8_t _6		:1;
		uint8_t _7		:1;
		uint8_t _8		:1;
		uint8_t _9		:1;
		uint8_t _10		:1;
		uint8_t _11		:1;
		uint8_t _12		:1;
		uint8_t _13		:1;
		uint8_t _14		:1;
		uint8_t _15		:1;
		uint8_t _16_0	:1;
		uint8_t _17_1	:1;
		uint8_t _18_2	:1;
		uint8_t _19_3	:1;
		uint8_t _20_4	:1;
		uint8_t _21_5	:1;
		uint8_t _22_6	:1;
		uint8_t _23_7	:1;
		uint8_t _24_8	:1;
		uint8_t _25_9	:1;
		uint8_t _26_10	:1;
		uint8_t _27_11	:1;
		uint8_t _28_12	:1;
		uint8_t _29_13	:1;
		uint8_t _30_14	:1;
		uint8_t _31_15	:1;
	} pin;
	uint32_t all;
} _1bits_t;

typedef union {
	struct {
		uint8_t _0	:2;
		uint8_t _1	:2;
		uint8_t _2	:2;
		uint8_t _3	:2;
		uint8_t _4	:2;
		uint8_t _5	:2;
		uint8_t _6	:2;
		uint8_t _7	:2;
		uint8_t _8	:2;
		uint8_t _9	:2;
		uint8_t _10	:2;
		uint8_t _11	:2;
		uint8_t _12	:2;
		uint8_t _13	:2;
		uint8_t _14	:2;
		uint8_t _15	:2;
	} pin;
	uint32_t all;
} _2bits_t;

typedef union {
	struct {
		uint8_t _0_8 	:4;
		uint8_t _1_9 	:4;
		uint8_t _2_10 	:4;
		uint8_t _3_11 	:4;
		uint8_t _4_12 	:4;
		uint8_t _5_13 	:4;
		uint8_t _6_14 	:4;
		uint8_t _7_15 	:4;
	} pin;
	uint32_t all;
} _4bits_t;

typedef struct {
	volatile _2bits_t MODER;
	volatile _1bits_t OTYPER;
	volatile _2bits_t OSPEEDR;
	volatile _2bits_t PUPDR;
	volatile _1bits_t IRD;
	volatile _1bits_t ODR;
	volatile _1bits_t BSRR;
	volatile _1bits_t LCKR;
	volatile _4bits_t AFRL;
	volatile _4bits_t AFRH;
	volatile _1bits_t BRR;
} gpio_reg_t;

#define GPIOA	((gpio_reg_t*) (IOPORT_BASE + GPIOA_OFFSET))
#define GPIOB	((gpio_reg_t*) (IOPORT_BASE + GPIOB_OFFSET))
#define GPIOC	((gpio_reg_t*) (IOPORT_BASE + GPIOC_OFFSET))
#define GPIOD	((gpio_reg_t*) (IOPORT_BASE + GPIOD_OFFSET))
#define GPIOE	((gpio_reg_t*) (IOPORT_BASE + GPIOE_OFFSET))
#define GPIOH	((gpio_reg_t*) (IOPORT_BASE + GPIOH_OFFSET))