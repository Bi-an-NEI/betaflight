/*
 * @Author: g05047
 * @Date: 2023-03-24 17:43:23
 * @LastEditors: g05047
 * @LastEditTime: 2023-05-11 15:49:30
 * @Description: file content
 */
/*
 * This file is part of INAV.
 *
 * INAV is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * INAV is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with INAV.  If not, see <http://www.gnu.org/licenses/>.
 */

//#include <stdint.h>

//#include "platform.h"

//#include "drivers/bus.h"
//#include "drivers/io.h"
//#include "drivers/pwm_mapping.h"
//#include "drivers/timer.h"

#include <stdint.h>

#include "platform.h"
#include "drivers/io.h"

#include "drivers/dma.h"
#include "drivers/timer.h"
#include "drivers/timer_def.h"

//BUSDEV_REGISTER_SPI_TAG(busdev_icm42605,     DEVHW_ICM42605,      ICM42605_SPI_BUS,    ICM42605_CS_PIN,     GYRO_1_EXTI_PIN, 0,  DEVFLAGS_NONE,  IMU_ICM42605_ALIGN);

const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {
    DEF_TIM(TIM1, CH3, PA10,  TIM_USE_PPM, 0, 0),                            // PPM, RX1  
    
    DEF_TIM(TIM2, CH4, PB11,   TIM_USE_MOTOR, 0, 0),     // S1   D(1, 4, 5)
    DEF_TIM(TIM2, CH3, PB10,   TIM_USE_MOTOR, 0, 0),     // S2   D(1, 5, 4)   
    DEF_TIM(TIM3, CH4, PB1,   TIM_USE_MOTOR, 0, 0),     // S3   D(1, 7, 5)
    DEF_TIM(TIM3, CH3, PB0,   TIM_USE_MOTOR, 0, 0),     // S4   D(1, 2, 5)

    DEF_TIM(TIM8, CH4, PC9,   TIM_USE_MOTOR, 0, 0),    // S5   D(2, 4, 7)
    DEF_TIM(TIM8, CH3, PC8,   TIM_USE_MOTOR, 0, 1),    // S6   D(1, 6, 3)
    DEF_TIM(TIM8, CH2, PC7,   TIM_USE_MOTOR, 0, 1),    // S7   D(1, 0, 2)    
    DEF_TIM(TIM8, CH1, PC6,   TIM_USE_MOTOR, 0, 1),    // S8   D(1, 3, 2)

    DEF_TIM(TIM2, CH1, PA15,  TIM_USE_LED, 0, 0),                             // LED     
    
};
