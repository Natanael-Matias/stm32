#pragma once

#include <stdint.h>
#include "mem_addr.h"

typedef union {
    struct {
        uint8_t HSI16ON         :1; // Bit 0 HSI16ON: 16 MHz high-speed internal clock enable
        uint8_t HSI16KERON      :1; // Bit 1 HSI16KERON: High-speed internal clock enable bit for some IP kernels
        uint8_t HSI16RDYF       :1; // Bit 2 HSI16RDYF: Internal high-speed clock ready flag
        uint8_t HSI16DIVEN      :1; // Bit 3 HSI16DIVEN HSI16 divider enable bit
        uint8_t HSI16DIVF       :1; // Bit 4 HSI16DIVF HSI16 divider flag
        uint8_t HSI16OUTEN      :1; // Bit 5 HSI16OUTEN: 16 MHz high-speed internal clock output enable
        uint8_t reserved0       :2; // Bits 7:6 Reserved, must be kept at reset value.
        uint8_t MSION           :1; // Bit 8 MSION: MSI clock enable bit
        uint8_t MSIRDY          :1; // Bit 9 MSIRDY: MSI clock ready flag
        uint8_t reserved1       :6; // Bits 15:10 Reserved, must be kept at reset value.
        uint8_t HSEON           :1; // Bit 16 HSEON: HSE clock enable bit
        uint8_t HSERDY          :1; // Bit 17 HSERDY: HSE clock ready flag
        uint8_t HSEBYP          :1; // Bit 18 HSEBYP: HSE clock bypass bit
        uint8_t CSSHSEON        :1; // Bit 19 CSSHSEON: Clock security system on HSE enable bit
        uint8_t RTCPRE          :2; // Bits 21:20 RTCPRE[1:0] RTC prescaler
        uint8_t reserved2       :2; // Bits 23:22 Reserved, must be kept at reset value.
        uint8_t PLLON           :1; // Bit 24 PLLON: PLL enable bit
        uint8_t PLLRDY          :1; // Bit 25 PLLRDY: PLL clock ready flag
        uint8_t reserved3       :6; // Bits 31:26 Reserved, must be kept at reset value.
    } bit;
    uint32_t all;
} cr_bit_t;

typedef union {
    struct {
        uint8_t HSI16CAL        :8; // Bits 7:0 HSI16CAL[7:0] Internal high speed clock calibration
        uint8_t HSI16TRIM       :5; // Bits 12:8 HSI16TRIM[4:0]: High speed internal clock trimming
        uint8_t MSIRANGE        :3; // Bits 15:13 MSIRANGE[2:0]: MSI clock ranges
        uint8_t MSICAL          :8; // Bits 23:16 MSICAL[7:0]: MSI clock calibration
        uint8_t MSITRIM         :8; // Bits 31:24 MSITRIM[7:0]: MSI clock trimming
    } bit;
    uint32_t all;
} icscr_bit_t;

typedef union {
    struct {
        uint8_t HSI48ON         :1;  // Bit 0 HSI48ON: 48MHz HSI clock enable bit
        uint8_t HSI48RDY        :1;  // Bit 1 HSI48RDY: 48MHz HSI clock ready flag
        uint8_t HSI48DIV6EN     :1;  // Bit 2 HSI48DIV6EN: 48 MHz HSI clock divided by 6 output enable
        uint8_t reserved0       :5;  // Bits 7:3 Reserved, must be kept at reset value.
        uint8_t HSI48CAL        :8;  // Bits 15:8 HSI48CAL[7:0]: 48 MHz HSI clock calibration
        uint8_t reserved1       :16; // Bits 31:16 Reserved, must be kept at reset value.
    } bit;
    uint32_t all;
} crrcr_bit_t;

typedef union {
    struct {
        uint8_t SW          :2; // Bits 1:0 SW[1:0]: System clock switch
        uint8_t SWS         :2; // Bits 3:2 SWS[1:0]: System clock switch status
        uint8_t HPRE        :4; // Bits 7:4 HPRE[3:0]: AHB prescaler
        uint8_t PPRE1       :3; // Bits 10:8 PPRE1[2:0]: APB low-speed prescaler (APB1)
        uint8_t PPRE2       :3; // Bits 13:11 PPRE2[2:0]: APB high-speed prescaler (APB2)
        uint8_t reserved0   :1; // Bit 14 Reserved, must be kept at reset value.
        uint8_t STOPWUCK    :1; // Bit 15 STOPWUCK: Wake-up from Stop clock selection
        uint8_t PLLSRC      :1; // Bit 16 PLLSRC: PLL entry clock source
        uint8_t reserved1   :1; // Bit 17 Reserved, must be kept at reset value.
        uint8_t PLLMUL      :4; // Bits 21:18 PLLMUL[3:0]: PLL multiplication factor
        uint8_t PLLDIV      :2; // Bits 23:22 PLLDIV[1:0]: PLL output division
        uint8_t MCOSEL      :4; // Bits 27:24 MCOSEL[3:0]: Microcontroller clock output selection
        uint8_t MCOPRE      :3; // Bits 30:28 MCOPRE[2:0]: Microcontroller clock output prescaler
        uint8_t reserved2   :1; // Bit 31 Reserved, must be kept at reset value
    } bit;
    uint32_t all;
} cfgr_bit_t;

typedef struct {
    volatile uint32_t CR;           // Clock control register
    volatile uint32_t ICSCR;        // Internal clock sources calibration register
    volatile uint32_t CRRCR;        // Clock recovery RC register
    volatile uint32_t CFGR;         // Clock configuration register
    volatile uint32_t CIER;         // Clock interrupt enable register
    volatile uint32_t CIFR;         // Clock interrupt flag register
    volatile uint32_t CICR;         // Clock interrupt clear register
    volatile uint32_t IOPRSTR;      // GPIO reset register
    volatile uint32_t AHBRSTR;      // AHB peripheral reset register
    volatile uint32_t APB2RSTR;     // APB2 peripheral reset register
    volatile uint32_t APB1RSTR;     // APB1 peripheral reset register
    volatile uint32_t IOPENR;       // GPIO clock enable register
    volatile uint32_t AHBENR;       // AHB peripheral clock enable register
    volatile uint32_t APB2ENR;      // APB2 peripheral clock enable register
    volatile uint32_t APB1ENR;      // APB1 peripheral clock enable register
    volatile uint32_t IOPSMEN;      // GPIO clock enable in Sleep mode register
    volatile uint32_t AHBSMENR;     // AHB peripheral clock enable in Sleep mode register (RCC_AHBSMENR)
    volatile uint32_t APB2SMENR;    // APB2 peripheral clock enable in Sleep mode register (RCC_APB2SMENR)
    volatile uint32_t APB1SMENR;    // APB1 peripheral clock enable in Sleep mode register (RCC_APB1SMENR)
    volatile uint32_t CCIPR;        // Clock configuration register
    volatile uint32_t CSR;          // Control/status register
} rcc_reg_t;
