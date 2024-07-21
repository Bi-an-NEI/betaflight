/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32F405

#define BOARD_NAME        BI_AN_F4_FLIGHT
#define MANUFACTURER_ID   BI_AN

#define LED0_PIN                PA14 
#define LED1_PIN                PA13 

#define USE_BEEPER 
#define BEEPER_PIN              PB9 
#define BEEPER_INVERTED 

#define RX_PPM_PIN           PA3
#define LED_STRIP_PIN        PB1
/************************ACC GYRO SPI1***************************/
#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN         PA5
#define SPI1_SDI_PIN         PB4
#define SPI1_SDO_PIN         PA7

#define USE_ACC
#define USE_GYRO_SPI_MPU6000 
#define USE_GYRO_SPI_MPU6500
#define USE_ACC_SPI_ICM42688P

#define USE_GYRO
#define USE_ACC_SPI_MPU6000 
#define USE_ACC_SPI_MPU6500
#define USE_GYRO_SPI_ICM42688P

#define GYRO_1_SPI_INSTANCE     SPI1 
#define GYRO_1_CS_PIN           PC14 
#define GYRO_1_EXTI_PIN         PC15 

#define USE_MPU_DATA_READY_SIGNAL 
#define GYRO_1_ALIGN            CW270_DEG 
/************************FLASH OSD BARO SPI2******************************/
#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN         PB13
#define SPI2_SDI_PIN         PC2
#define SPI2_SDO_PIN         PC3

#define USE_FLASHFS
#define USE_FLASH_W25Q128FV
#define USE_FLASH_M25P16
#define USE_FLASH_W25N01G
#define FLASH_SPI_INSTANCE      SPI2 
#define FLASH_CS_PIN            PC13 
#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_FLASH

#define USE_MAX7456 
#define MAX7456_SPI_INSTANCE    SPI2 
#define MAX7456_SPI_CS_PIN      PB12 

#define USE_BARO 
#define USE_BARO_SPI_BMP280 
#define BARO_SPI_INSTANCE    SPI2 
#define BARO_CS_PIN      PB2 

/********************************MOTOR***************************/
#define MOTOR1_PIN           PC9
#define MOTOR2_PIN           PC8
#define MOTOR3_PIN           PB15
#define MOTOR4_PIN           PA8
#define MOTOR5_PIN           PB11
#define MOTOR6_PIN           PB10
#define MOTOR7_PIN           PB3
#define MOTOR8_PIN           PA15
/********************************SERVO***************************/
#define SERVO1_PIN           PB14
#define SERVO2_PIN           PA6
#define SERVO3_PIN           PB6
/****************************UART*********************************/
#define USE_UART1
#define UART1_TX_PIN         PA9
#define UART1_RX_PIN         PA10

#define USE_UART2
#define UART2_TX_PIN         PA2
#define UART2_RX_PIN         PA3

#define USE_UART3
#define UART3_TX_PIN         PC10
#define UART3_RX_PIN         PC11

#define USE_UART4
#define UART4_TX_PIN         PA0
#define UART4_RX_PIN         PA1

#define USE_UART5
#define UART5_TX_PIN         PA12
#define UART5_RX_PIN         PD2

#define USE_UART6 
#define UART6_RX_PIN            PC7 
#define UART6_TX_PIN            PC6 

/****************************I2C MAG*******************************/
#define USE_I2C
#define I2C1_SCL_PIN         PB8
#define I2C1_SDA_PIN         PB7
#define DASHBOARD_I2C_INSTANCE  (I2CDEV_1)

#define USE_MAG
#define USE_MAG_HMC5883 
#define USE_MAG_QMC5883 
#define USE_MAG_LIS3MDL 
#define MAG_I2C_INSTANCE        (I2CDEV_1)
/******************************************************************/
//#define ADC_INSTANCE         ADC1
#define USE_ADC
#define ADC_VBAT_PIN         PC4
#define ADC_RSSI_PIN         PB0
#define ADC_CURR_PIN         PC5

#define ADC_EXTERNAL1_PIN    PC0

#define PINIO1_PIN           PA4
#define PINIO2_PIN           PB5

#define ADC1_DMA_OPT        1

#define DEFAULT_DSHOT_BURST DSHOT_DMAR_ON
/***************************TIMER_MAP******************************/
#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, MOTOR1_PIN, 2,  0) \
    TIMER_PIN_MAP( 1, MOTOR2_PIN, 2,  0) \
    TIMER_PIN_MAP( 2, MOTOR3_PIN, 1,  1) \
    TIMER_PIN_MAP( 3, MOTOR4_PIN, 1,  1) \
    TIMER_PIN_MAP( 4, MOTOR5_PIN, 1,  0) \
    TIMER_PIN_MAP( 5, MOTOR6_PIN, 1,  0) \
    TIMER_PIN_MAP( 6, MOTOR7_PIN, 1,  0) \
    TIMER_PIN_MAP( 7, MOTOR8_PIN, 1,  0) \
    TIMER_PIN_MAP( 8, SERVO1_PIN, 3, -1) \
    TIMER_PIN_MAP( 9, SERVO2_PIN, 2, -1) \
    TIMER_PIN_MAP(10, SERVO3_PIN, 1,  0) \
    TIMER_PIN_MAP(11, LED_STRIP_PIN, 2,  0) \
    TIMER_PIN_MAP(12, BEEPER_PIN, 2, -1) \
    TIMER_PIN_MAP(13, RX_PPM_PIN, 3, -1) \
    TIMER_PIN_MAP(14, UART2_TX_PIN, 2,  0)

#define MAG_I2C_INSTANCE                (I2CDEV_1)
#define USE_BARO
#define BARO_I2C_INSTANCE               (I2CDEV_1)
#define DEFAULT_CURRENT_METER_SOURCE    CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE    VOLTAGE_METER_ADC
#define DEFAULT_VOLTAGE_METER_SCALE     210
#define DEFAULT_CURRENT_METER_SCALE     150
#define PINIO1_BOX 40
#define PINIO2_BOX 41
#define SYSTEM_HSE_MHZ                  8
#define DEFAULT_BLACKBOX_DEVICE         BLACKBOX_DEVICE_FLASH

#define SERIALRX_UART                   SERIAL_PORT_USART2
#define DEFAULT_RX_FEATURE              FEATURE_RX_SERIAL
