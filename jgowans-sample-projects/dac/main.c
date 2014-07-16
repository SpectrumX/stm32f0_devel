#define STM32F051

#include <stdint.h>
#include "stm32f0xx.h"

void main(void);
void init_dac(void);

uint16_t table_mountain[] = {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x10, 0x60, 0x60, 0xb0, 0xb0, 0x101, 0x101, 0x101, 0x151, 0x159, 0x17a, 0x192, 0x1ca, 0x1ba, 0x1ba, 
0x1e2, 0x1ea, 0x212, 0x22b, 0x253, 0x29b, 0x2d4, 0x2e4, 0x314, 0x334, 0x334, 0x344, 0x36c, 0x395, 0x3a5, 0x3b5, 0x3e5, 0x40d, 
0x425, 0x43e, 0x45e, 0x466, 0x4ae, 0x4ef, 0x507, 0x53f, 0x577, 0x598, 0x5c8, 0x5e0, 0x5f0, 0x610, 0x630, 0x638, 0x679, 0x6b9, 
0x72a, 0x7e3, 0x86c, 0x8ec, 0x94d, 0x99d, 0x9e6, 0xa0e, 0xa4e, 0xa56, 0xa6f, 0xa7f, 0xa8f, 0xaa7, 0xaaf, 0xae7, 0xb30, 0xb78, 
0xbd9, 0xc29, 0xc51, 0xc79, 0xc92, 0xcaa, 0xcc2, 0xcd2, 0xcb2, 0xcaa, 0xcd2, 0xd8b, 0xe44, 0xeb5, 0xf45, 0xfb6, 0xfff, 0xfe6, 
0xfd6, 0xfe6, 0xfe6, 0xfde, 0xf9e, 0xf96, 0xf56, 0xf3d, 0xf2d, 0xeed, 0xeed, 0xebd, 0xead, 0xead, 0xe5c, 0xe04, 0xd8b, 0xd2a, 
0xd0a, 0xd0a, 0xcfa, 0xcfa, 0xcf2, 0xce2, 0xcca, 0xcca, 0xcb2, 0xc81, 0xc69, 0xc29, 0xbd9, 0xbd0, 0xc71, 0xd12, 0xdd3, 0xee5, 
0xf4e, 0xf66, 0xf76, 0xf76, 0xf76, 0xf76, 0xf76, 0xf76, 0xf76, 0xf76, 0xf7e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 
0xf9e, 0xf9e, 0xf86, 0xf86, 0xf86, 0xf86, 0xf86, 0xf86, 0xf86, 0xf86, 0xf86, 0xf86, 0xf86, 0xf86, 0xf86, 0xf86, 0xf86, 0xf86, 
0xf86, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf7e, 
0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 
0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 
0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 0xf9e, 
0xf9e, 0xec5, 0xdbb, 0xd83, 0xd1a, 0xd22, 0xd2a, 0xd2a, 0xcfa, 0xcc2, 0xcaa, 0xc79, 0xc8a, 0xc51, 0xbf1, 0xbd9, 0xbd0, 
0xbd9, 0xb88, 0xb70, 0xa46, 0x93d, 0x8c4, 0x87c, 0x87c, 0x88c, 0x87c, 0x864, 0x864, 0x864, 0x82b, 0x83b, 0x85c, 0x864, 0x86c, 
0x87c, 0x87c, 0x843, 0x86c, 0x88c, 0x8b4, 0x8b4, 0x8c4, 0x8c4, 0x8c4, 0x8cc, 0x8b4, 0x8a4, 0x864, 0x823, 0x813, 0x7c3, 0x6e9, 
0x6a9, 0x681, 0x699, 0x681, 0x699, 0x699, 0x6b9, 0x6d1, 0x6d1, 0x6e9, 0x6e9, 0x70a, 0x722, 0x722, 0x70a, 0x6fa, 0x699, 0x699, 
0x6a9, 0x691, 0x681, 0x669, 0x630, 0x630, 0x630, 0x620, 0x610, 0x630, 0x681, 0x6d1, 0x722, 0x7c3, 0x813, 0x8a4, 0x8bc, 0x915, 
0x95d, 0x9be, 0x9f6, 0xa06, 0x9f6, 0x97d, 0x8f4, 0x83b, 0x7c3, 0x75a, 0x6f1, 0x6b1, 0x689, 0x659, 0x638, 0x5f8, 0x5f0, 0x598, 
0x58f, 0x54f, 0x53f, 0x527, 0x4ff, 0x4ef, 0x49e, 0x44e, 0x446, 0x436, 0x3fd, 0x3bd, 0x3ad, 0x385, 0x35c, 0x35c, 0x35c, 0x32c,
 0x2bb, 0x233, 0x1ca, 0x1ca, 0x1a2, 0x18a, 0x17a, 0x151, 0x129, 0x101, 0xd9, 0xc9, 0xc9, 0xb0, 0x98, 0x88, 0x88, 0x88, 0x88, 
 0x60, 0x38, 0x38, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
 0x0, 0x0, 0x0};

void main(void)
{
	uint16_t pos = 0;
	uint16_t i;
	init_dac();
	for(;;) {
		DAC->DHR12R1 = table_mountain[pos++];
                for (uint32_t i = 0; i < 180; i++);
		if (pos >= ( sizeof(table_mountain) / sizeof(table_mountain[0]) )) {
			pos = 0;
		}
	}
}

void init_dac(void) {
	RCC->APB1ENR |= RCC_APB1ENR_DACEN;
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;
	GPIOA->MODER |= GPIO_MODER_MODER4;// PA4 as analogue
	DAC->CR |= DAC_CR_EN1;
	DAC->CR |= DAC_CR_BOFF1; //disable the buffer to increase voltage swing
}
