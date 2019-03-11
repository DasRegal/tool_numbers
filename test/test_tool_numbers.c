/**
  ******************************************************************************
  * @file    test_tool_numbers.c
  * @author  
  * @version V0.0.1
  * @date    
  * @brief   This file provides tests for tool_numbers.
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
#include "unity.h"
#include "tool_numbers.h"

/** @addtogroup Tool_numbers_module
  * @{
  */

/** @defgroup TESTS
  * @brief Tests for Tool numbers module
  * @{
  */

/** @defgroup TESTS_Private_Functions
  * @{
  */


/**
  * @brief Per-test setup
  * @param None
  * @retval None
  */
void setUP( void )
{
    
}

/**
  * @brief Per-test cleanup
  * @param None
  * @retval None
  */
void tearDown( void )
{
    InitNumber();
}

void test_init_val( void )
{
    int result = 0;
    result = GetNumber();
    TEST_ASSERT_EQUAL_INT( 0, result );
}

void test_increment_number( void )
{
    int result = 0;
    IncrementNumber();
    result = GetNumber();
    TEST_ASSERT_EQUAL_INT( 1, result );
}

void test_init_max_val( void )
{
    // TEST_IGNORE();
    int result = 0;
    for (int i = 0; i < INT_MAX; i++)
    {
        IncrementNumber();
    }
    result = GetNumber();
    TEST_ASSERT_EQUAL_INT( INT_MAX, result );
}

void test_set_max_val( void )
{
    int result = 0;
    
    SetMaximumValue(3);

    IncrementNumber();
    IncrementNumber();
    IncrementNumber();

    result = GetNumber();
    TEST_ASSERT_EQUAL_INT( 3, result );
}

void test_reset_val_if_reach_max( void )
{
    int result = 0;

    SetMaximumValue(3);

    IncrementNumber();
    IncrementNumber();
    IncrementNumber();
    IncrementNumber();

    result = GetNumber();
    TEST_ASSERT_EQUAL_INT( 0, result );
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