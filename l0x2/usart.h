#include <stdint.h>
#include "mem_addr.h"

typedef union {
	struct {
		uint8_t UE			:1;	// 0 - USART enable
		uint8_t UESM		:1;	// 1 - USART enable in stop mode
		uint8_t RE			:1;	// 2 - Receiver enable
		uint8_t TE			:1;	// 3 - Transmitter enable
		uint8_t IDLEIE		:1;	// 4 - IDLE interrupt enable
		uint8_t RXNEIE		:1;	// 5 - RXNE interrupt enable
		uint8_t TCIE		:1;	// 6 - Transmission complete interrupt enable
		uint8_t TXEIE		:1;	// 7 - interrupt enable
		uint8_t PEIE		:1;	// 8 - PE interrupt enable
		uint8_t PS			:1;	// 9 - Parity selection
		uint8_t PCE			:1;	// 10 - Parity control enable
		uint8_t WAKE		:1;	// 11 - Receiver wakeup method
		uint8_t M0			:1;	// 12 - Word length
		uint8_t MME			:1;	// 13 - Mute mode enable
		uint8_t CMIE		:1;	// 14 - Character match interrrupt enable
		uint8_t OVER8		:1;	// 15 - Oversampling mode
		uint8_t DEDT		:5;	// 16-20 - Driver enable de-assertion time
		uint8_t DEAT		:5;	// 21-25 - Driver enbale assertion time
		uint8_t RTOIE		:1;	// 26 - Receiver timeout interrupt enable
		uint8_t EOBIE		:1;	// 27 - End of block interrupt enable
		uint8_t M1			:1;	// 28 - Word length
		uint8_t res0		:3;	// 29-31 - Reserved
	} bit;
	uint32_t all;
} cr1_bit_t;

typedef union {
	struct {
		uint8_t res0		:3;	// 0-3 - Reserved
		uint8_t ADDM7		:1;	// 4 - 7-bit address detection / 4-bit address detection
		uint8_t LBDL		:1;	// 5 - LIN break detection length
		uint8_t LBDIE		:1;	// 6 - LIN break detection interrupt enable
		uint8_t res1		:1;	// 7 - Reserved
		uint8_t LBCL		:1;	// 8 - Last bit clock pulse
		uint8_t CPHA		:1;	// 9 - Clock phase
		uint8_t CPOL		:1;	// 10 - Clock polarity
		uint8_t CLKEN		:1;	// 11 - Clock enable
		uint8_t STOP		:2;	// 12-13 - Stop bits
		uint8_t LINEN		:1;	// 14 - LIN mode enable
		uint8_t SWAP		:1;	// 15 - Swap Tx/Rx pins
		uint8_t RXINV		:1;	// 16 - Rx pin active level inversion
		uint8_t TXINV		:1;	// 17 - Tx pin active level inversion
		uint8_t DATAINV		:1;	// 18 - Binary data inversion
		uint8_t MSBFIRST	:1;	// 19 - Most significant bit first
		uint8_t ABREN		:1;	// 20 - Auto baud rate enable
		uint8_t ABRMOD		:2;	// 21-22 - Auto baud rate mode
		uint8_t RTOEN		:1;	// 23 - Receiver timeout enable
		uint8_t ADD0		:4;	// 24-27 - Address of the USART node
		uint8_t ADD1		:4;	// 28-31 - Address of the UASRT node
	} bit;
	uint32_t all;
} cr2_bit_t;

typedef union {
	struct {
		uint8_t EIE			:1;	// 0 - Error interrupt enable
		uint8_t IREN		:1;	// 1 - IrDA mode enable
		uint8_t IRLP		:1;	// 2 - IrDA low-power
		uint8_t HDSEL		:1;	// 3 - Half-duplex selection
		uint8_t NACK		:1;	// 4 - Smartcard NACK enable
		uint8_t SCEN		:1;	// 5 - Smartcard mode enable
		uint8_t DMAR		:1;	// 6 - DMA enable receiver
		uint8_t DMAT		:1;	// 7 - DMA enable transmitter
		uint8_t RTSE		:1;	// 8 - RTS enable
		uint8_t CTSE		:1;	// 9 - CTS enable
		uint8_t CTSIE		:1;	// 10 - CTS interrupt enable
		uint8_t ONEBIT		:1;	// 11 - One sample bit method enable
		uint8_t OVRDIS		:1;	// 12 - Overrun Disable
		uint8_t DDRE		:1;	// 13 - DMA Disable on Reception Error
		uint8_t DEM			:1;	// 14 - Driver enable mode
		uint8_t DEP			:1;	// 15 - Driver enable polarity selection
		uint8_t res0		:1;	// 16 - Reserved
		uint8_t SCARCNT		:3;	// 17-19 - Smartcard auto-retry count
		uint8_t WUS			:2;	// 20-21 - Wakeup from Stop mode interrupt flag selection
		uint8_t WUFIE		:1;	// 22 - Wakeup from Stop mode interrupt enable
		uint8_t UCESM		:1;	// 23 - USART Clock Enable in Stop mode
		uint8_t res1		:8;	// 24-31 - Reserved
	} bit;
	uint32_t all;
} cr3_bit_t;

typedef union {
	struct {
		uint8_t OVER8		:4;  // 0-3 - When OVER8 bit in CR1 = 1, BRR[2:0] = USARTDIV[3:0] shifted 1 bit to the right.
		uint16_t DIV		:12; //	4-15 - BRR[15:4] = USARTDIV[15:4]
		uint16_t res		:16; // Reserved
	} bit;
	uint32_t all;
} brr_bit_t;

typedef union {
	struct {
		uint8_t PSC			:8;  // 0-7 - Prescaler value
		uint8_t GT			:8;  // 8-15 - Guard time value
		uint16_t res		:16; // 16-31 - reserved
	} bit;
	uint32_t all;
} gtpr_bit_t;

typedef union {
	struct {
		uint32_t RTO		:24;  // 0-23 - Receiver timeout value
		uint8_t BLEN		:8;  // 24-31 - Block Length
	} bit;
	uint32_t all;
} rtor_bit_t;

typedef union {
	struct {
		uint8_t ABRRQ		:1;  // 0 - Auto baud rate request
		uint8_t SBKRQ		:1;  // 1 - Send break request
		uint8_t MMRQ		:1;  // 2 - Mute mode request
		uint8_t RXFRQ		:1;  // 3 - Receive data flush request
		uint8_t TXFRQ		:1;  // 4 - Transmit data flush request
		uint8_t res 		:27; // 5-31 - Reserved
	} bit;
	uint32_t all;
} rqr_bit_t;

typedef union {
	struct {
		uint8_t PE			:1;  // 0 - Parity error
		uint8_t FE			:1;  // 1 - Framing error
		uint8_t NF			:1;  // 2 - START bit Noise detection flag
		uint8_t ORE			:1;  // 3 - Overrun error
		uint8_t IDLE		:1;  // 4 - Idle line detected
		uint8_t RXNE 		:1;  // 5 - Read data register not empty
		uint8_t TC 			:1;  // 6 - Transmission complete
		uint8_t TXE			:1;  // 7 - Transmit data register empty
		uint8_t LBDF		:1;  // 8 - LIN break detection flag
		uint8_t CTSIF		:1;  // 9 - CTS interrupt flag
		uint8_t CTS			:1;  // 10 - CTS flag
		uint8_t RTOF		:1;  // 11 - Receiver timeout
		uint8_t EOBF 		:1;  // 12 - End of block flag
		uint8_t res0		:1;  // 13 - Reserved
		uint8_t ABRE		:1;  // 14 - Auto baud rate error
		uint8_t ABRF		:1;  // 15 - Auto baud rate flag
		uint8_t BUSY		:1;  // 16 - Busy flag
		uint8_t CMF			:1;  // 17 - Character match flag
		uint8_t SBKF 		:1;  // 18 - Send break flag
		uint8_t RWU			:1;  // 19 - Receiver wakeup from Mute mode
		uint8_t WUF			:1;  // 20 - Wakeup from Stop mode flag
		uint8_t TEACK		:1;  // 21 - Transmit enable acknowledge flag 
		uint8_t REACK		:1;  // 22 - Receive enable acknowledge flag
		uint16_t res1 		:9;  // 23-31 - Reserved
	} bit;
	uint32_t all;
} isr_bit_t;

typedef union {
	struct {
		uint8_t PECF		:1;  // 0 - Parity error clear flag
		uint8_t FECF		:1;  // 1 - Framing error clear flag
		uint8_t NCF			:1;  // 2 - Noise detected clear flag
		uint8_t ORECF		:1;  // 3 - Overrun error clear flag
		uint8_t IDLECF		:1;  // 4 - Idle line detected clear flag
		uint8_t res0 		:1;  // 5 - Reserved
		uint8_t TCCF 		:1;  // 6 - Transmission complete clear flag
		uint8_t res1		:1;  // 7 - Reserved
		uint8_t LBDCF		:1;  // 8 - LIN break detection clear flag
		uint8_t CTSCF		:1;  // 9 - CTS clear flag
		uint8_t res2		:1;  // 10 - Reserved
		uint8_t RTOCF		:1;  // 11 - Receiver timeout clear flag
		uint8_t EOBCF 		:1;  // 12 - End of block clear flag
		uint8_t res3		:4;  // 13-16 - Reserved
		uint8_t CMCF		:1;  // 17 - Character match clear flag
		uint8_t res4		:2;  // 18-19 - Reserved
		uint8_t WUCF		:1;  // 20 - Wakeup from Stop mode clear flag 
		uint16_t res5		:11; // 21-31 - Reserved
	} bit;
	uint32_t all;
} icr_bit_t;

typedef union {
	struct {
		uint16_t RDR		:9;  // 0-8 - Receive data value
		uint32_t res		:23; // 9-31 - Reserved
	} bit;
	uint32_t all;
} rdr_bit_t;

typedef union {
	struct {
		uint16_t TDR		:9;  // 0-23 - Transmit data value
		uint32_t res		:23; // 9-31 - Reserved
	} bit;
	uint32_t all;
} tdr_bit_t;

typedef struct {
	volatile cr1_bit_t CR1;		// Control register 1 
	volatile cr2_bit_t CR2;		// Control register 2
	volatile cr3_bit_t CR3;		// Control register 3
	volatile brr_bit_t BRR;		// Baud rate register
	volatile gtpr_bit_t GTPR;	// Guard time and prescaler register
	volatile rtor_bit_t RTOR;	// Receiver timeout register
	volatile rqr_bit_t RQR;		// Request register
	volatile isr_bit_t ISR;		// Interrupt and status register
	volatile icr_bit_t ICR;		// Interrupt flag clear register
	volatile rdr_bit_t RDR;		// Receive data register
	volatile tdr_bit_t TDR;		// Transmite date register
} usart_reg_t;

#define USART1				((usart_reg_t*)(APB2_ADDR + USART1_OFFSET))
#define USART2				((usart_reg_t*)(APB1_ADDR + USART2_OFFSET))
#define USART4				((usart_reg_t*)(APB1_ADDR + USART4_OFFSET))
#define USART5				((usart_reg_t*)(APB1_ADDR + USART5_OFFSET))
