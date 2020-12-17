/*
 * Copyright (c) 2018, Texas Instruments Incorporated - http://www.ti.com/
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE
 * COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/**
 * \addtogroup cc13xx-cc26xx-platform
 * @{
 *
 * \defgroup launchpad-peripherals LaunchPad peripherals
 *
 * Defines related to configuring LaunchPad peripherals. All LaunchPads
 * are identical to a very large extent. Everything documented within this
 * group applies to both sensortags
 *
 * @{
 *
 * \file
 *        Header file with definitions related to LaunchPad boards.
 * \author
 *        Edvard Pettersen <e.pettersen@ti.com>
 * \note
 *        This file should not be included directly
 */
/*---------------------------------------------------------------------------*/
#ifndef BOARD_CONF_H_
#define BOARD_CONF_H_
/*---------------------------------------------------------------------------*/
#include "rf-conf.h"

/*---------------------------------------------------------------------------*/
/**
 * \name LED configurations for the dev/leds.h API.
 *
 * Those values are not meant to be modified by the user
 * @{
 */
#define PLATFORM_HAS_LEDS           1

#define LEDS_CONF_COUNT             3U

#define LEDS_CONF_RED               0
#define LEDS_CONF_GREEN             1
#define LEDS_CONF_BLUE              2
#define LEDS_CONF_NETSTATE          3

#define LEDS_CONF_ALL               ((1 << LEDS_CONF_COUNT) - 1)
/** @} */
/*---------------------------------------------------------------------------*/
/**
 * \name Button configurations for the dev/button-hal.h API.
 *
 * Those values are not meant to be modified by the user
 * @{
 */
#define PLATFORM_HAS_BUTTON           1
#define PLATFORM_SUPPORTS_BUTTON_HAL  1

#define BUTTON_HAL_ID_KEY_LEFT      0
#define BUTTON_HAL_ID_KEY_RIGHT     1
/** @} */
/*---------------------------------------------------------------------------*/
/**
 * \name LaunchPad does not have any sensors.
 *
 * Those values are not meant to be modified by the user
 * @{
 */
#define BOARD_CONF_HAS_SENSORS      0
/** @} */
/*---------------------------------------------------------------------------*/
/**
 * \name The external flash SPI CS pin, defined in Board.h.
 *
 * Note that SPI SCK, MOSI and MISO does not need to be defined, as they are
 * implicitly defined via the Board_SPI0 controller.
 *
 * Those values are not meant to be modified by the user
 * @{
 */
#if TI_SPI_CONF_SPI0_ENABLE
#define EXT_FLASH_SPI_CONTROLLER      Board_SPI0

#define EXT_FLASH_SPI_PIN_SCK         Board_SPI0_SCK
#define EXT_FLASH_SPI_PIN_MOSI        Board_SPI0_MOSI
#define EXT_FLASH_SPI_PIN_MISO        Board_SPI0_MISO
#define EXT_FLASH_SPI_PIN_CS          Board_SPI_FLASH_CS

#define EXT_FLASH_DEVICE_ID           0x14
#define EXT_FLASH_MID                 0xC2

#define EXT_FLASH_PROGRAM_PAGE_SIZE   256
#define EXT_FLASH_ERASE_SECTOR_SIZE   4096
#endif /* TI_SPI_CONF_SPI0_ENABLE */
/** @} */
/*---------------------------------------------------------------------------*/
#endif /* BOARD_CONF_H_ */
/*---------------------------------------------------------------------------*/
/**
 * @}
 * @}
 */
