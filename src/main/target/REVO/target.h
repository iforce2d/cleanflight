/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "REVO"

#define CONFIG_START_FLASH_ADDRESS (0x08080000) //0x08080000 to 0x080A0000 (FLASH_Sector_8)

#define USBD_PRODUCT_STRING     "Revolution"
#ifdef OPBL
#define USBD_SERIALNUMBER_STRING "0x8020000"
#endif

#define LED0                    PB5
#define LED1                    PB4

#define BEEPER                  PB4

#define INVERTER                PC0 // PC0 used as inverter select GPIO
#define INVERTER_USART          USART1

// MPU6000 interrupts
#define USE_EXTI
#define MPU_INT_EXTI            PC4
#define USE_MPU_DATA_READY_SIGNAL

#define MPU6000_CS_PIN          PA4
#define MPU6000_SPI_INSTANCE    SPI1

#define GYRO
#define USE_GYRO_SPI_MPU6000
#define ACC_MPU6000_ALIGN       CW270_DEG

#define ACC
#define USE_ACC_SPI_MPU6000
#define GYRO_MPU6000_ALIGN      CW270_DEG

#define MAG
#define USE_MAG_AK8963
#define USE_MAG_AK8975
#define USE_MAG_HMC5883
#define MAG_HMC5883_ALIGN       CW90_DEG
#define USE_MAG_MAG3110

//#define USE_MAG_DATA_READY_SIGNAL
//#define ENSURE_MAG_DATA_READY_IS_HIGH
//#define MAG_INT_EXTI            PB7

//#define USE_MAG_NAZA
//#define MAG_NAZA_ALIGN          CW180_DEG_FLIP

#define BARO
#define USE_BARO_BMP085
#define USE_BARO_BMP280
#define USE_BARO_MS5611

//#define PITOT
//#define USE_PITOT_MS4525
#define PITOT_I2C_INSTANCE      I2C_DEVICE_EXT

#define M25P16_CS_PIN           PB3
#define M25P16_SPI_INSTANCE     SPI3

#define USE_FLASHFS
#define USE_FLASH_M25P16

#define USE_VCP
#define VBUS_SENSING_PIN        PC5
#define VBUS_SENSING_ENABLED

#define USE_UART1
#define UART1_RX_PIN            PA10
#define UART1_TX_PIN            PA9
#define UART1_AHB1_PERIPHERALS  RCC_AHB1Periph_DMA2

#define USE_UART3
#define UART3_RX_PIN            PB11
#define UART3_TX_PIN            PB10

#define USE_UART6
#define UART6_RX_PIN            PC7
#define UART6_TX_PIN            PC6

#define SERIAL_PORT_COUNT       4 //VCP, USART1, USART3, USART6

#define USE_SPI

#define USE_SPI_DEVICE_1

#define USE_SPI_DEVICE_3
#define SPI3_NSS_PIN            PB3
#define SPI3_SCK_PIN            PC10
#define SPI3_MISO_PIN           PC11
#define SPI3_MOSI_PIN           PC12

#define USE_I2C
#define I2C_DEVICE              (I2CDEV_1)
#define I2C_DEVICE_EXT          (I2CDEV_2)

#define USE_ADC
#define CURRENT_METER_ADC_PIN   PC1
#define VBAT_ADC_PIN            PC2
#define RSSI_ADC_GPIO_PIN       PA0

#define SENSORS_SET (SENSOR_ACC|SENSOR_MAG|SENSOR_BARO)

#define LED_STRIP
// LED Strip can run off Pin 6 (PA0) of the ESC outputs.
#define WS2811_PIN                      PA0
#define WS2811_TIMER                    TIM5
#define WS2811_TIMER_CHANNEL            TIM_Channel_1
#define WS2811_DMA_HANDLER_IDENTIFER    DMA1_ST2_HANDLER
#define WS2811_DMA_STREAM               DMA1_Stream2
#define WS2811_DMA_FLAG                 DMA_FLAG_TCIF2
#define WS2811_DMA_IT                   DMA_IT_TCIF2
#define WS2811_DMA_CHANNEL              DMA_Channel_6
#define WS2811_DMA_IRQ                  DMA1_Stream2_IRQn

#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

#define MAG_GPS_ALIGN           CW180_DEG_FLIP

#define NAV
#define NAV_AUTO_MAG_DECLINATION
#define NAV_GPS_GLITCH_DETECTION

#define DEFAULT_RX_FEATURE      FEATURE_RX_SERIAL
#define DEFAULT_FEATURES        (FEATURE_BLACKBOX)

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

// Number of available PWM outputs
#define MAX_PWM_OUTPUT_PORTS    11

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         0xffff

#define USABLE_TIMER_CHANNEL_COUNT 12
#define USED_TIMERS             ( TIM_N(2) | TIM_N(3) | TIM_N(5) | TIM_N(12) | TIM_N(8) | TIM_N(9) )
