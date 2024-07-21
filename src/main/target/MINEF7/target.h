/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "MNF7"
#define USBD_PRODUCT_STRING     "MINE_V1_BY_BIAN"

#define LED0                    PC13

#define USE_BEEPER
#define BEEPER_PIN              PC3
#define BEEPER_INVERTED

// *************** SPI1 Gyro & ACC *******************
#define USE_SPI
#define USE_SPI_DEVICE_1

#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P

#define USE_EXTI
#define USE_GYRO_EXTI
#define GYRO_1_EXTI_PIN         PA4
#define USE_MPU_DATA_READY_SIGNAL

#define USE_ACC
#define USE_ACC_SPI_ICM42688P

#define GYRO_1_CS_PIN           PC4
#define GYRO_1_SPI_INSTANCE     SPI1

#define GYRO_1_ALIGN            CW270_DEG
// *************** I2C /Baro/Mag *********************
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C_DEVICE              (I2CDEV_1)
#define I2C1_SCL                PB8
#define I2C1_SDA                PB9

#define USE_MAG
#define MAG_I2C_INSTANCE        (I2CDEV_1)
#define USE_MAG_ALL

#define USE_RANGEFINDER
// *************** SPI2 FLASH ***********************
#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15

#define USE_FLASHFS
#define USE_FLASH_W25N01G
#define USE_FLASH_M25P16
#define USE_FLASH_W25Q128FV
#define FLASH_SPI_INSTANCE      SPI2
#define FLASH_CS_PIN            PB12
#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

// *************** SPI3 BARO OSD*******************
#define USE_SPI_DEVICE_3
#define SPI3_SCK_PIN            PB3
#define SPI3_MISO_PIN           PB4
#define SPI3_MOSI_PIN           PB5

#define USE_BARO
#define USE_BARO_BMP280
#define USE_BARO_SPI_BMP280

//#define BMP280_SPI_INSTANCE     SPI3
#define BARO_SPI_INSTANCE       SPI3
//#define BMP280_CS_PIN           PB7
#define BARO_CS_PIN             PB7
//#define BMP280_SPI_CS_PIN       PB7

#define USE_MAX7456
#define MAX7456_SPI_INSTANCE    SPI3
#define MAX7456_SPI_CS_PIN      PA8

// *************** UART *****************************
#define USE_VCP

#define USE_UART1
#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define USE_UART2
#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            PA3

#define USE_UART3
#define UART3_TX_PIN            PC10
#define UART3_RX_PIN            PC11

#define USE_UART4
#define UART4_TX_PIN            PA0
#define UART4_RX_PIN            PA1

#define USE_UART5
#define UART5_TX_PIN            PC12
#define UART5_RX_PIN            PD2

#define SERIAL_PORT_COUNT       6

#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_CRSF
#define SERIALRX_UART           SERIAL_PORT_USART3

// *************** ADC *****************************
#define USE_ADC
#define ADC_INSTANCE            ADC1
#define ADC1_DMA_OPT            0

#define VBAT_ADC_PIN            PC0
#define CURRENT_METER_ADC_PIN   PC1
#define RSSI_ADC_PIN            PC2

#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC

// *************** PINIO ***************************


// *************** LEDSTRIP ************************
#define USE_LED_STRIP
#define WS2811_PIN              PA15

#define DEFAULT_FEATURES                (FEATURE_OSD | FEATURE_RSSI_ADC | FEATURE_GPS | FEATURE_TELEMETRY | FEATURE_LED_STRIP)

#define ENABLE_DSHOT_DMAR       DSHOT_DMAR_ON

#define USE_SPEKTRUM_BIND
#define BIND_PIN                PA3  //USART2_RX

//#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD (BIT(2))

#define USABLE_TIMER_CHANNEL_COUNT 10

#define USED_TIMERS             (TIM_N(1)|TIM_N(2)|TIM_N(3)|TIM_N(8))

#define USE_DSHOT
#define USE_ESC_SENSOR
