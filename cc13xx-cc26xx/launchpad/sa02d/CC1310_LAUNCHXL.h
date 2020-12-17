/*
 * Copyright (c) 2015-2019, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/** ============================================================================
 *  @file       CC1310_LAUNCHXL.h
 *
 *  @brief      CC1310 LaunchPad Board Specific header file.
 *
 *  The CC1310_LAUNCHXL header file should be included in an application as
 *  follows:
 *  @code
 *  #include "CC1310_LAUNCHXL.h"
 *  @endcode
 *
 *  ============================================================================
 */
#ifndef __CC1310_LAUNCHXL_BOARD_H__
#define __CC1310_LAUNCHXL_BOARD_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "contiki-conf.h"

/* Includes */
#include <ti/drivers/PIN.h>
#include <ti/devices/DeviceFamily.h>
#include DeviceFamily_constructPath(driverlib/ioc.h)

/* Externs */
extern const PIN_Config BoardGpioInitTable[];

/* Defines */
#define CC1310_LAUNCHXL

/* Mapping of pins to board signals using general board aliases
 *      <board signal alias>                  <pin mapping>   <comments>
 */

/* Analog capable DIOs */
#define CC1310_LAUNCHXL_DIO23_ANALOG          IOID_23
#define CC1310_LAUNCHXL_DIO24_ANALOG          IOID_24
#define CC1310_LAUNCHXL_DIO25_ANALOG          IOID_25
#define CC1310_LAUNCHXL_DIO26_ANALOG          IOID_26
#define CC1310_LAUNCHXL_DIO27_ANALOG          IOID_27
#define CC1310_LAUNCHXL_DIO28_ANALOG          IOID_28
#define CC1310_LAUNCHXL_DIO29_ANALOG          IOID_29
#define CC1310_LAUNCHXL_DIO30_ANALOG          IOID_30

/* Digital IOs */
#define CC1310_LAUNCHXL_DIO0                  IOID_0
#define CC1310_LAUNCHXL_DIO1                  IOID_1
#define CC1310_LAUNCHXL_DIO2                  IOID_2
#define CC1310_LAUNCHXL_DIO10                 IOID_10
#define CC1310_LAUNCHXL_DIO11                 IOID_11
#define CC1310_LAUNCHXL_DIO12                 IOID_12
#define CC1310_LAUNCHXL_DIO13                 IOID_13
#define CC1310_LAUNCHXL_DIO14                 IOID_14
#define CC1310_LAUNCHXL_DIO15                 IOID_15
#define CC1310_LAUNCHXL_DIO16_TDO             IOID_16
#define CC1310_LAUNCHXL_DIO17_TDI             IOID_17
#define CC1310_LAUNCHXL_DIO21                 IOID_21
#define CC1310_LAUNCHXL_DIO22                 IOID_22

/* I2C */
#define CC1310_LAUNCHXL_I2C0_SCL0             IOID_26
#define CC1310_LAUNCHXL_I2C0_SDA0             IOID_25

/* I2S */
#define CC1310_LAUNCHXL_I2S_ADO               PIN_UNASSIGNED
#define CC1310_LAUNCHXL_I2S_ADI               PIN_UNASSIGNED
#define CC1310_LAUNCHXL_I2S_BCLK              PIN_UNASSIGNED
#define CC1310_LAUNCHXL_I2S_MCLK              PIN_UNASSIGNED
#define CC1310_LAUNCHXL_I2S_WCLK              PIN_UNASSIGNED

/* PWM Outputs */
#define CC1310_LAUNCHXL_PWMPIN0               IOID_5
#define CC1310_LAUNCHXL_PWMPIN1               IOID_6
#define CC1310_LAUNCHXL_PWMPIN2               IOID_7
#define CC1310_LAUNCHXL_PWMPIN3               IOID_8
#define CC1310_LAUNCHXL_PWMPIN4               IOID_9
#define CC1310_LAUNCHXL_PWMPIN5               PIN_UNASSIGNED
#define CC1310_LAUNCHXL_PWMPIN6               PIN_UNASSIGNED
#define CC1310_LAUNCHXL_PWMPIN7               PIN_UNASSIGNED

/* SPI */
#define CC1310_LAUNCHXL_SPI_FLASH_CS          PIN_UNASSIGNED
#define CC1310_LAUNCHXL_FLASH_CS_ON           0
#define CC1310_LAUNCHXL_FLASH_CS_OFF          1

/* SPI Board */
#define CC1310_LAUNCHXL_SPI0_MISO             PIN_UNASSIGNED          /* RF1.20 */
#define CC1310_LAUNCHXL_SPI0_MOSI             PIN_UNASSIGNED          /* RF1.18 */
#define CC1310_LAUNCHXL_SPI0_CLK              PIN_UNASSIGNED          /* RF1.16 */
#define CC1310_LAUNCHXL_SPI0_CSN              PIN_UNASSIGNED
#define CC1310_LAUNCHXL_SPI1_MISO             PIN_UNASSIGNED
#define CC1310_LAUNCHXL_SPI1_MOSI             PIN_UNASSIGNED
#define CC1310_LAUNCHXL_SPI1_CLK              PIN_UNASSIGNED
#define CC1310_LAUNCHXL_SPI1_CSN              PIN_UNASSIGNED

/* UART Board */
#define CC1310_LAUNCHXL_UART_RX               IOID_3          /* RXD */
#define CC1310_LAUNCHXL_UART_TX               IOID_4          /* TXD */
#define CC1310_LAUNCHXL_UART_CTS              IOID_19         /* CTS */
#define CC1310_LAUNCHXL_UART_RTS              IOID_18         /* RTS */



/* Discrete Inputs */
#define CC1310_LAUNCHXL_PIN_BTN1              CC1310_LAUNCHXL_DIO11
#define CC1310_LAUNCHXL_PIN_BTN2              CC1310_LAUNCHXL_DIO13
#define CC1310_LAUNCHXL_PIN_BTN3              CC1310_LAUNCHXL_DIO14
#define CC1310_LAUNCHXL_PIN_SLEEP             CC1310_LAUNCHXL_DIO2

/* LEDs */
#define CC1310_LAUNCHXL_GPIO_LED_ON           1
#define CC1310_LAUNCHXL_GPIO_LED_OFF          0
#define CC1310_LAUNCHXL_PIN_LED_ON            CC1310_LAUNCHXL_GPIO_LED_ON
#define CC1310_LAUNCHXL_PIN_LED_OFF           CC1310_LAUNCHXL_GPIO_LED_OFF

#define CC1310_LAUNCHXL_PIN_BLED              CC1310_LAUNCHXL_PWMPIN0
#define CC1310_LAUNCHXL_PIN_GLED              CC1310_LAUNCHXL_PWMPIN1
#define CC1310_LAUNCHXL_PIN_RLED              CC1310_LAUNCHXL_PWMPIN2

#define CC1310_LAUNCHXL_PIN_NETSTATE          CC1310_LAUNCHXL_DIO10

/*!
 *  @brief  Initialize the general board specific settings
 *
 *  This function initializes the general board specific settings.
 */
void CC1310_LAUNCHXL_initGeneral(void);

/*!
 *  @brief  Turn off the external flash on LaunchPads
 *
 */
void CC1310_LAUNCHXL_shutDownExtFlash(void);

/*!
 *  @brief  Wake up the external flash present on the board files
 *
 *  This function toggles the chip select for the amount of time needed
 *  to wake the chip up.
 */
void CC1310_LAUNCHXL_wakeUpExtFlash(void);

/*!
 *  @def    CC1310_LAUNCHXL_ADCBufName
 *  @brief  Enum of ADCBufs
 */
typedef enum CC1310_LAUNCHXL_ADCBufName {
    CC1310_LAUNCHXL_ADCBUF0 = 0,

    CC1310_LAUNCHXL_ADCBUFCOUNT
} CC1310_LAUNCHXL_ADCBufName;

/*!
 *  @def    CC1310_LAUNCHXL_ADCBuf0ChannelName
 *  @brief  Enum of ADCBuf channels
 */
typedef enum CC1310_LAUNCHXL_ADCBuf0ChannelName {
    CC1310_LAUNCHXL_ADCBUF0CHANNEL0 = 0,
    CC1310_LAUNCHXL_ADCBUF0CHANNEL1,
    CC1310_LAUNCHXL_ADCBUF0CHANNEL2,
    CC1310_LAUNCHXL_ADCBUF0CHANNEL3,
    CC1310_LAUNCHXL_ADCBUF0CHANNEL4,
    CC1310_LAUNCHXL_ADCBUF0CHANNEL5,
    CC1310_LAUNCHXL_ADCBUF0CHANNEL6,
    CC1310_LAUNCHXL_ADCBUF0CHANNEL7,
    CC1310_LAUNCHXL_ADCBUF0CHANNELVDDS,
    CC1310_LAUNCHXL_ADCBUF0CHANNELDCOUPL,
    CC1310_LAUNCHXL_ADCBUF0CHANNELVSS,

    CC1310_LAUNCHXL_ADCBUF0CHANNELCOUNT
} CC1310_LAUNCHXL_ADCBuf0ChannelName;

/*!
 *  @def    CC1310_LAUNCHXL_ADCName
 *  @brief  Enum of ADCs
 */
typedef enum CC1310_LAUNCHXL_ADCName {
    CC1310_LAUNCHXL_ADC0 = 0,
    CC1310_LAUNCHXL_ADC1,
    CC1310_LAUNCHXL_ADC2,
    CC1310_LAUNCHXL_ADC3,
    CC1310_LAUNCHXL_ADC4,
    CC1310_LAUNCHXL_ADC5,
    CC1310_LAUNCHXL_ADC6,
    CC1310_LAUNCHXL_ADC7,
    CC1310_LAUNCHXL_ADCDCOUPL,
    CC1310_LAUNCHXL_ADCVSS,
    CC1310_LAUNCHXL_ADCVDDS,

    CC1310_LAUNCHXL_ADCCOUNT
} CC1310_LAUNCHXL_ADCName;

/*!
 *  @def    CC1310_LAUNCHXL_CryptoName
 *  @brief  Enum of Crypto names
 */
typedef enum CC1310_LAUNCHXL_CryptoName {
    CC1310_LAUNCHXL_CRYPTO0 = 0,

    CC1310_LAUNCHXL_CRYPTOCOUNT
} CC1310_LAUNCHXL_CryptoName;

/*!
 *  @def    CC1310_LAUNCHXL_AESCCMName
 *  @brief  Enum of AESCCM names
 */
typedef enum CC1310_LAUNCHXL_AESCCMName {
    CC1310_LAUNCHXL_AESCCM0 = 0,

    CC1310_LAUNCHXL_AESCCMCOUNT
} CC1310_LAUNCHXL_AESCCMName;

/*!
 *  @def    CC1310_LAUNCHXL_AESGCMName
 *  @brief  Enum of AESGCM names
 */
typedef enum CC1310_LAUNCHXL_AESGCMName {
    CC1310_LAUNCHXL_AESGCM0 = 0,

    CC1310_LAUNCHXL_AESGCMCOUNT
} CC1310_LAUNCHXL_AESGCMName;

/*!
 *  @def    CC1310_LAUNCHXL_AESCBCName
 *  @brief  Enum of AESCBC names
 */
typedef enum CC1310_LAUNCHXL_AESCBCName {
    CC1310_LAUNCHXL_AESCBC0 = 0,

    CC1310_LAUNCHXL_AESCBCCOUNT
} CC1310_LAUNCHXL_AESCBCName;

/*!
 *  @def    CC1310_LAUNCHXL_AESCTRName
 *  @brief  Enum of AESCTR names
 */
typedef enum CC1310_LAUNCHXL_AESCTRName {
    CC1310_LAUNCHXL_AESCTR0 = 0,

    CC1310_LAUNCHXL_AESCTRCOUNT
} CC1310_LAUNCHXL_AESCTRName;

/*!
 *  @def    CC1310_LAUNCHXL_AESECBName
 *  @brief  Enum of AESECB names
 */
typedef enum CC1310_LAUNCHXL_AESECBName {
    CC1310_LAUNCHXL_AESECB0 = 0,

    CC1310_LAUNCHXL_AESECBCOUNT
} CC1310_LAUNCHXL_AESECBName;

/*!
 *  @def    CC1310_LAUNCHXL_AESCTRDRBGName
 *  @brief  Enum of AESCTRDRBG names
 */
typedef enum CC1310_LAUNCHXL_AESCTRDRBGName {
    CC1310_LAUNCHXL_AESCTRDRBG0 = 0,

    CC1310_LAUNCHXL_AESCTRDRBGCOUNT
} CC1310_LAUNCHXL_AESCTRDRBGName;

/*!
 *  @def    CC1310_LAUNCHXL_TRNGName
 *  @brief  Enum of TRNG names
 */
typedef enum CC1310_LAUNCHXL_TRNGName {
    CC1310_LAUNCHXL_TRNG0 = 0,

    CC1310_LAUNCHXL_TRNGCOUNT
} CC1310_LAUNCHXL_TRNGName;

/*!
 *  @def    CC1310_LAUNCHXL_GPIOName
 *  @brief  Enum of GPIO names
 */
typedef enum CC1310_LAUNCHXL_GPIOName {
    CC1310_LAUNCHXL_GPIO_SLEEP = 0,
    CC1310_LAUNCHXL_GPIO_NETSTATE,

    CC1310_LAUNCHXL_GPIO_UART_RX,
    CC1310_LAUNCHXL_GPIO_UART_TX,

    CC1310_LAUNCHXL_GPIO_PWM0,
    CC1310_LAUNCHXL_GPIO_PWM1,
    CC1310_LAUNCHXL_GPIO_PWM2,
    CC1310_LAUNCHXL_GPIO_PWM3,
    CC1310_LAUNCHXL_GPIO_PWM4,

    CC1310_LAUNCHXL_GPIO_PIN0,
    CC1310_LAUNCHXL_GPIO_PIN1,
    CC1310_LAUNCHXL_GPIO_PIN2,
    CC1310_LAUNCHXL_GPIO_PIN3,
    CC1310_LAUNCHXL_GPIO_PIN4,

    CC1310_LAUNCHXL_GPIO_SCL,
    CC1310_LAUNCHXL_GPIO_SDA,

    CC1310_LAUNCHXL_GPIO_ADC0,
    CC1310_LAUNCHXL_GPIO_ADC1,
    CC1310_LAUNCHXL_GPIO_ADC2,

    CC1310_LAUNCHXL_GPIOCOUNT
} CC1310_LAUNCHXL_GPIOName;

/*!
 *  @def    CC1310_LAUNCHXL_GPTimerName
 *  @brief  Enum of GPTimer parts
 */
typedef enum CC1310_LAUNCHXL_GPTimerName {
    CC1310_LAUNCHXL_GPTIMER0A = 0,
    CC1310_LAUNCHXL_GPTIMER0B,
    CC1310_LAUNCHXL_GPTIMER1A,
    CC1310_LAUNCHXL_GPTIMER1B,
    CC1310_LAUNCHXL_GPTIMER2A,
    CC1310_LAUNCHXL_GPTIMER2B,
    CC1310_LAUNCHXL_GPTIMER3A,
    CC1310_LAUNCHXL_GPTIMER3B,

    CC1310_LAUNCHXL_GPTIMERPARTSCOUNT
} CC1310_LAUNCHXL_GPTimerName;

/*!
 *  @def    CC1310_LAUNCHXL_GPTimers
 *  @brief  Enum of GPTimers
 */
typedef enum CC1310_LAUNCHXL_GPTimers {
    CC1310_LAUNCHXL_GPTIMER0 = 0,
    CC1310_LAUNCHXL_GPTIMER1,
    CC1310_LAUNCHXL_GPTIMER2,
    CC1310_LAUNCHXL_GPTIMER3,

    CC1310_LAUNCHXL_GPTIMERCOUNT
} CC1310_LAUNCHXL_GPTimers;

/*!
 *  @def    CC1310_LAUNCHXL_I2CName
 *  @brief  Enum of I2C names
 */
typedef enum CC1310_LAUNCHXL_I2CName {
#if TI_I2C_CONF_I2C0_ENABLE
    CC1310_LAUNCHXL_I2C0 = 0,
#endif

    CC1310_LAUNCHXL_I2CCOUNT
} CC1310_LAUNCHXL_I2CName;

/*!
 *  @def    CC1310_LAUNCHXL_I2SName
 *  @brief  Enum of I2S names
 */
typedef enum CC1310_LAUNCHXL_I2SName {
    CC1310_LAUNCHXL_I2S0 = 0,

    CC1310_LAUNCHXL_I2SCOUNT
} CC1310_LAUNCHXL_I2SName;

/*!
 *  @def    CC1310_LAUNCHXL_NVSName
 *  @brief  Enum of NVS names
 */
typedef enum CC1310_LAUNCHXL_NVSName {
#if TI_NVS_CONF_NVS_INTERNAL_ENABLE
    CC1310_LAUNCHXL_NVSCC26XX0 = 0,
#endif
#if TI_NVS_CONF_NVS_EXTERNAL_ENABLE
    CC1310_LAUNCHXL_NVSSPI25X0,
#endif

    CC1310_LAUNCHXL_NVSCOUNT
} CC1310_LAUNCHXL_NVSName;

/*!
 *  @def    CC1310_LAUNCHXL_PWMName
 *  @brief  Enum of PWM outputs
 */
typedef enum CC1310_LAUNCHXL_PWMName {
    CC1310_LAUNCHXL_PWM0 = 0,
    CC1310_LAUNCHXL_PWM1,
    CC1310_LAUNCHXL_PWM2,
    CC1310_LAUNCHXL_PWM3,
    CC1310_LAUNCHXL_PWM4,
    CC1310_LAUNCHXL_PWM5,
    CC1310_LAUNCHXL_PWM6,
    CC1310_LAUNCHXL_PWM7,

    CC1310_LAUNCHXL_PWMCOUNT
} CC1310_LAUNCHXL_PWMName;

/*!
 *  @def    CC1310_LAUNCHXL_SDName
 *  @brief  Enum of SD names
 */
typedef enum CC1310_LAUNCHXL_SDName {
    CC1310_LAUNCHXL_SDSPI0 = 0,

    CC1310_LAUNCHXL_SDCOUNT
} CC1310_LAUNCHXL_SDName;

/*!
 *  @def    CC1310_LAUNCHXL_SPIName
 *  @brief  Enum of SPI names
 */
typedef enum CC1310_LAUNCHXL_SPIName {
#if TI_SPI_CONF_SPI0_ENABLE
    CC1310_LAUNCHXL_SPI0 = 0,
#endif
#if TI_SPI_CONF_SPI1_ENABLE
    CC1310_LAUNCHXL_SPI1,
#endif

    CC1310_LAUNCHXL_SPICOUNT
} CC1310_LAUNCHXL_SPIName;

/*!
 *  @def    CC1310_LAUNCHXL_UARTName
 *  @brief  Enum of UARTs
 */
typedef enum CC1310_LAUNCHXL_UARTName {
#if TI_UART_CONF_UART0_ENABLE
    CC1310_LAUNCHXL_UART0 = 0,
#endif

    CC1310_LAUNCHXL_UARTCOUNT
} CC1310_LAUNCHXL_UARTName;

/*!
 *  @def    CC1310_LAUNCHXL_UDMAName
 *  @brief  Enum of DMA buffers
 */
typedef enum CC1310_LAUNCHXL_UDMAName {
    CC1310_LAUNCHXL_UDMA0 = 0,

    CC1310_LAUNCHXL_UDMACOUNT
} CC1310_LAUNCHXL_UDMAName;

/*!
 *  @def    CC1310_LAUNCHXL_WatchdogName
 *  @brief  Enum of Watchdogs
 */
typedef enum CC1310_LAUNCHXL_WatchdogName {
    CC1310_LAUNCHXL_WATCHDOG0 = 0,

    CC1310_LAUNCHXL_WATCHDOGCOUNT
} CC1310_LAUNCHXL_WatchdogName;


#ifdef __cplusplus
}
#endif

#endif /* __CC1310_LAUNCHXL_BOARD_H__ */
