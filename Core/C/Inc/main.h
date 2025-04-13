/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Pin GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define LEFT_MOTOR_A_Pin GPIO_PIN_0
#define LEFT_MOTOR_A_GPIO_Port GPIOA
#define LEFT_MOTOR_B_Pin GPIO_PIN_1
#define LEFT_MOTOR_B_GPIO_Port GPIOA
#define LEFT_MOTOR_C_Pin GPIO_PIN_2
#define LEFT_MOTOR_C_GPIO_Port GPIOA
#define LEFT_MOTOR_ENABLE_Pin GPIO_PIN_3
#define LEFT_MOTOR_ENABLE_GPIO_Port GPIOA
#define I2C2_SCL_Pin GPIO_PIN_10
#define I2C2_SCL_GPIO_Port GPIOB
#define I2C2_SDA_Pin GPIO_PIN_11
#define I2C2_SDA_GPIO_Port GPIOB
#define RIGHT_MOTOR_A_Pin GPIO_PIN_8
#define RIGHT_MOTOR_A_GPIO_Port GPIOA
#define RIGHT_MOTOR_B_Pin GPIO_PIN_9
#define RIGHT_MOTOR_B_GPIO_Port GPIOA
#define RIGHT_MOTOR_C_Pin GPIO_PIN_10
#define RIGHT_MOTOR_C_GPIO_Port GPIOA
#define RIGHT_MOTOR_ENABLE_Pin GPIO_PIN_11
#define RIGHT_MOTOR_ENABLE_GPIO_Port GPIOA
#define I2C1_SCL_Pin GPIO_PIN_6
#define I2C1_SCL_GPIO_Port GPIOB
#define I2C1_SDA_Pin GPIO_PIN_7
#define I2C1_SDA_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
