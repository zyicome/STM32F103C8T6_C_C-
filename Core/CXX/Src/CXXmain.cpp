#include "CXXmain.hpp"

// const variables
/* USER CODE BEGIN CV */

/* USER CODE END CV */

// define
/* USER CODE BEGIN D */

/* USER CODE END D */

// variables
/* USER CODE BEGIN V */

/* USER CODE END V */

// function prototypes
/* USER CODE BEGIN FP */

/* USER CODE END FP */

int main()
{
    HAL_Init(); // 初始化HAL库
    SystemClock_Config(); // 配置系统时钟
    // init
    /* USER CODE BEGIN Init */
    MX_GPIO_Init(); // 初始化GPIO
    /* USER CODE END Init */

    /* USER CODE BEGIN */

    /* USER CODE END 2 */
    
    while (1)
    {
        //Loop
        /* USER CODE BEGIN WHILE */

        /* USER CODE END WHILE */
    }
}