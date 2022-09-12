/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v11.0
processor: MCIMX6G2xxx05
package_id: MCIMX6G2CVM05
mcu_data: i_mx_2_0
processor_version: 11.0.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"

/***********************************************************************************************************************
 * Code
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'false', coreID: ca7}
- pin_list:
  - {pin_num: A14, peripheral: ECSPI1, signal: ecspi_mosi, pin_signal: LCD_DATA22}
  - {pin_num: C14, peripheral: ECSPI1, signal: ecspi_sclk, pin_signal: LCD_DATA20}
  - {pin_num: B14, peripheral: ECSPI1, signal: 'ecspi_ss, 0', pin_signal: LCD_DATA21}
  - {pin_num: D14, peripheral: GPIO3, signal: 'gpio_io, 24', pin_signal: LCD_DATA19}
  - {pin_num: D1, peripheral: ECSPI1, signal: ecspi_miso, pin_signal: CSI_DATA07}
  - {pin_num: B13, peripheral: GPIO3, signal: 'gpio_io, 22', pin_signal: LCD_DATA17}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {                                /*!< Function assigned for the core: Cortex-A7[ca7] */
    IOMUXC_SetPinMux(IOMUXC_CSI_DATA07_ECSPI1_MISO, 0U);
    IOMUXC_SetPinMux(IOMUXC_LCD_DATA17_GPIO3_IO22, 0U);
    IOMUXC_SetPinMux(IOMUXC_LCD_DATA19_GPIO3_IO24, 0U);
    IOMUXC_SetPinMux(IOMUXC_LCD_DATA20_ECSPI1_SCLK, 0U);
    IOMUXC_SetPinMux(IOMUXC_LCD_DATA21_ECSPI1_SS0, 0U);
    IOMUXC_SetPinMux(IOMUXC_LCD_DATA22_ECSPI1_MOSI, 0U);
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/