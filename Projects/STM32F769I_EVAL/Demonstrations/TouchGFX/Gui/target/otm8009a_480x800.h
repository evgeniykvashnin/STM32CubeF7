/**
  ******************************************************************************
  * This file is part of the TouchGFX 4.10.0 distribution.
  *
  * <h2><center>&copy; Copyright (c) 2018 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
  



/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __OTM8009A_480X800_H
#define __OTM8009A_480X800_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/

/** @addtogroup BSP
  * @{
  */

/** @addtogroup Components
  * @{
  */

/** @addtogroup otm8009a_480x800
  * @{
  */

/**
  * @}
  */

/** @defgroup otm8009a_480x800_Exported_Constants
  * @{
  */

/**
  * @brief  otm8009a_480x800 Size
  */

/* Width and Height in Portrait mode */
#define  OTM8009A_480X800_WIDTH           ((uint16_t)480)     /* LCD PIXEL WIDTH   */
#define  OTM8009A_480X800_HEIGHT          ((uint16_t)800)     /* LCD PIXEL HEIGHT  */
#define  HPITCH_480X800_16BIT             ((uint16_t)(480 * 2)) /* RGB565 horizontal pitch */
#define  VPITCH_480X800_16BIT             ((uint16_t)(800 * 2)) /* RGB565 horizontal pitch */
#define  HPITCH_480X800_24BIT             ((uint16_t)(480 * 3)) /* RGB565 horizontal pitch */
#define  VPITCH_480X800_24BIT             ((uint16_t)(800 * 3)) /* RGB565 horizontal pitch */
   

/* Width and Height in Landscape mode */
#define  OTM8009A_800X480_WIDTH           ((uint16_t)800)     /* LCD PIXEL WIDTH   */
#define  OTM8009A_800X480_HEIGHT          ((uint16_t)480)     /* LCD PIXEL HEIGHT  */
#define  HPITCH_800X480_16BIT             ((uint16_t)(800 * 2)) /* RGB565 horizontal pitch */
#define  VPITCH_800X480_16BIT             ((uint16_t)(480 * 2)) /* RGB565 horizontal pitch */
#define  HPITCH_800X480_24BIT             ((uint16_t)(800 * 3)) /* RGB565 horizontal pitch */
#define  VPITCH_800X480_24BIT             ((uint16_t)(480 * 3)) /* RGB565 horizontal pitch */

/**
  * @brief  OTM8009A_480X800 Timing parameters for Portrait orientation mode
  */
#define  OTM8009A_480X800_HSYNC            ((uint16_t)64)   /* Horizontal synchronization */
#define  OTM8009A_480X800_HBP              ((uint16_t)64)    /* Horizontal back porch      */
#define  OTM8009A_480X800_HFP              ((uint16_t)64)    /* Horizontal front porch     */
#define  OTM8009A_480X800_VSYNC            ((uint16_t)8)   /* Vertical synchronization   */
#define  OTM8009A_480X800_VBP              ((uint16_t)8)    /* Vertical back porch        */
#define  OTM8009A_480X800_VFP              ((uint16_t)8)    /* Vertical front porch       */

/**
  * @brief  OTM8009A_800X480 Timing parameters for Landscape orientation mode
  *         Same values as for Portrait mode in fact.
  */
#define  OTM8009A_800X480_HSYNC            OTM8009A_480X800_HSYNC  /* Horizontal synchronization */
#define  OTM8009A_800X480_HBP              OTM8009A_480X800_HBP    /* Horizontal back porch      */
#define  OTM8009A_800X480_HFP              OTM8009A_480X800_HFP    /* Horizontal front porch     */
#define  OTM8009A_800X480_VSYNC            OTM8009A_480X800_VSYNC  /* Vertical synchronization   */
#define  OTM8009A_800X480_VBP              OTM8009A_480X800_VBP    /* Vertical back porch        */
#define  OTM8009A_800X480_VFP              OTM8009A_480X800_VFP    /* Vertical front porch       */


/* List of OTM8009A used commands                                  */
/* Detailed in OTM8009A Data Sheet 'DATA_SHEET_OTM8009A_V0 92.pdf' */
/* Version of 14 June 2012                                         */
#define  OTM8009A_CMD_NOP                   0x00  /* NOP command      */
#define  OTM8009A_CMD_SWRESET               0x01  /* Sw reset command */
#define  OTM8009A_CMD_RDDMADCTL             0x0B  /* Read Display MADCTR command : read memory display access ctrl */
#define  OTM8009A_CMD_RDDCOLMOD             0x0C  /* Read Display pixel format */
#define  OTM8009A_CMD_SLPIN                 0x10  /* Sleep In command */
#define  OTM8009A_CMD_SLPOUT                0x11  /* Sleep Out command */
#define  OTM8009A_CMD_PTLON                 0x12  /* Partial mode On command */

#define  OTM8009A_CMD_DISPOFF               0x28  /* Display Off command */
#define  OTM8009A_CMD_DISPON                0x29  /* Display On command */

#define  OTM8009A_CMD_CASET                 0x2A  /* Column address set command */
#define  OTM8009A_CMD_PASET                 0x2B  /* Page address set command */

#define  OTM8009A_CMD_RAMWR                 0x2C  /* Memory (GRAM) write command */
#define  OTM8009A_CMD_RAMRD                 0x2E  /* Memory (GRAM) read command  */

#define  OTM8009A_CMD_PLTAR                 0x30  /* Partial area command (4 parameters) */

#define  OTM8009A_CMD_TEOFF                 0x34  /* Tearing Effect Line Off command : command with no parameter */

#define  OTM8009A_CMD_TEEON                 0x35  /* Tearing Effect Line On command : command with 1 parameter 'TELOM' */

/* Parameter TELOM : Tearing Effect Line Output Mode : possible values */
#define OTM8009A_TEEON_TELOM_VBLANKING_INFO_ONLY            0x00
#define OTM8009A_TEEON_TELOM_VBLANKING_AND_HBLANKING_INFO   0x01

#define  OTM8009A_CMD_MADCTR                0x36  /* Memory Access write control command  */

/* Possible used values of MADCTR */
#define OTM8009A_MADCTR_MODE_PORTRAIT       0x00
#define OTM8009A_MADCTR_MODE_LANDSCAPE      0x60 /* MY = 0, MX = 1, MV = 1, ML = 0, RGB = 0 */

#define  OTM8009A_CMD_IDMOFF                0x38  /* Idle mode Off command */
#define  OTM8009A_CMD_IDMON                 0x39  /* Idle mode On command */

#define  OTM8009A_CMD_COLMOD                0x3A  /* Interface Pixel format command */

/* Possible values of COLMOD parameter corresponding to used pixel formats */
#define  OTM8009A_COLMOD_RGB565             0x55
#define  OTM8009A_COLMOD_RGB888             0x77

#define  OTM8009A_CMD_RAMWRC                0x3C  /* Memory write continue command */
#define  OTM8009A_CMD_RAMRDC                0x3E  /* Memory read continue command  */

#define  OTM8009A_CMD_WRTESCN               0x44  /* Write Tearing Effect Scan line command */
#define  OTM8009A_CMD_RDSCNL                0x45  /* Read  Tearing Effect Scan line command */

/* CABC Management : ie : Content Adaptive Back light Control in IC OTM8009a */
#define  OTM8009A_CMD_WRDISBV               0x51  /* Write Display Brightness command          */
#define  OTM8009A_CMD_WRCTRLD               0x53  /* Write CTRL Display command                */
#define  OTM8009A_CMD_WRCABC                0x55  /* Write Content Adaptive Brightness command */
#define  OTM8009A_CMD_WRCABCMB              0x5E  /* Write CABC Minimum Brightness command     */

/**
  * @brief  OTM8009A_480X800 frequency divider
  */
#define OTM8009A_480X800_FREQUENCY_DIVIDER  2   /* LCD Frequency divider      */

#define OTM8009A_FORMAT_RGB888				      0
#define OTM8009A_FORMAT_RGB565				      1

/**
  * @}
  */
#ifdef __cplusplus
}
#endif

#endif /* __OTM8009A_480X800_H */
/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/