/**
  ******************************************************************************
  * @file    tool_numbers.c
  * @author  
  * @version V0.0.1
  * @date    
  * @brief   This file provides tools for numbers.
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE IS FOR EXAMPLE ONLY AIMS. AS A RESULT, AUTHOR SHALL
  * NOT BE HELD LIABLE FOR ANY DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH
  * RESPECT TO ANY CLAIMS ARISTING FROM THE CONTENT OF SUCH FIRMWARE AND/OR
  * THE USE MADE BY CUSTOMERS OF THE CODING INFORMATIONCONTAINED HEREIN IN
  * CONNECTION WITN THEIR PRODUCTS.
  *
  * <h2><center>&copy; Author </center></h2>
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/

#include <limits.h>

/** @addtogroup Tool_numbers_module
  * @{
  */

/** @defgroup TOOL_NUMBERS
  * @brief Tool numbers module
  * @{
  */

/** @defgroup TOOL_NUMBERS_Private_Variables
  * @{
  */

/** @brief Current number */
static int currentNumber_ = 0;
/** @brief Maximum value of number */
static int maxValue_      = INT_MAX;

/**
  * @}
  */

/** @defgroup TOOL_NUMBERS_Private_Functions
  * @{
  */


/**
  * @brief Get current number
  * @param  None
  * @retval current value
  */
int GetNumber (void)
{
	return currentNumber_;
}

/**
  * @brief Increment current number
  * @note This function increases the current value by 1 until it reaches
  *   \ref maxValue_. Otherwise it resets the value to 0.
  */
void IncrementNumber (void)
{
	if (currentNumber_ < maxValue_)
		currentNumber_++;
	else
		currentNumber_ = 0;
}

/**
  * @brief Get current number 
  * @param maximumValue
  *   This parameter can have a value in range from 0 to maximum value of int.
  * @retval None
  */
void SetMaximumValue (int maximumValue)
{
	if (maximumValue <= INT_MAX)
		maxValue_ = maximumValue;
	else
		maxValue_ = INT_MAX;
}

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/********************************* Example *********************END OF FILE****/