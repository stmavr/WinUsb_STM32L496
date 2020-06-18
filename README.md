# WinUsb_STM32L496
WinUsb project

  To Snorlex board
  __HAL_RCC_GPIOB_CLK_ENABLE();
	__HAL_RCC_GPIOC_CLK_ENABLE();
	
  GPIO_InitTypeDef GPIO_InitStruct = {0};
		
	GPIOC->BSRR = GPIO_BSRR_BR_7;
  GPIO_InitStruct.Pin   = GPIO_PIN_7;
  GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull  = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);
	
  GPIOB->BSRR = GPIO_BSRR_BS_4;
  GPIO_InitStruct.Pin   = GPIO_PIN_4;
  GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull  = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
	
  GPIOB->BSRR = GPIO_BSRR_BR_3;
  GPIO_InitStruct.Pin   = GPIO_PIN_3;
  GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull  = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

Sys frequency of MCU 80Мгц
