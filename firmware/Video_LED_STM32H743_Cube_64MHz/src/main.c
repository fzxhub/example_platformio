#include "stm32h7xx_hal.h"

#define LED_PIN                     GPIO_PIN_0
#define LED_GPIO_PORT               GPIOB
#define LED_GPIO_CLK_ENABLE()       __HAL_RCC_GPIOB_CLK_ENABLE()


void LED_Init(void) 
{
    LED_GPIO_CLK_ENABLE();
    GPIO_InitTypeDef GPIO_InitStruct;
    GPIO_InitStruct.Pin = LED_PIN;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_PULLUP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(LED_GPIO_PORT, &GPIO_InitStruct);
}

int main(void) {
    HAL_Init();
    LED_Init();

    while (1) 
    {
        HAL_GPIO_TogglePin(LED_GPIO_PORT, LED_PIN);
        HAL_Delay(500-1);
    }
}

void SysTick_Handler(void) { HAL_IncTick(); }