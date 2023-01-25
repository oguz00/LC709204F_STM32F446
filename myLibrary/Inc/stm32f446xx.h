#ifndef		INC_STM32F446XX_H_
#define		STM32_F446XX_H


/*
 * Memory Base Adresses
 */

#define FLASH_BASE           	0x08000000UL 					/*!< FLASH base address in the alias region */
//#define FLASH_BANK1_END       0x08003FFFUL 					/*!< FLASH END address of bank1 */
#define SRAM1_BASE            	0x20000000UL 					/*!< SRAM1 base address in the alias region(112 KB)  */
#define SRAM2_BASE			  	0x2001C000UL 					/*!< SRAM2 base address in the alias region(16KB)   */

//#define SRAM_BB_BASE          0x22000000UL 					/*!< SRAM base address in the bit-band region */
//#define PERIPH_BB_BASE        0x42000000UL 					/*!< Peripheral base address in the bit-band region */


/*!< Peripheral memory map */
#define PERIPH_BASE           	0x40000000UL 					/*!< Peripheral base address in the alias region */
#define APB1PERIPH_BASE       	PERIPH_BASE						/*!< APB1 BASE ADRESS */
#define APB2PERIPH_BASE       	(PERIPH_BASE + 0x00010000UL)	/*!< APB2 BASE ADRESS */
#define AHB1PERIPH_BASE      	(PERIPH_BASE + 0x00020000UL)	/*!< AHB1 BASE ADRESS */
#define AHB2PERIPH_BASE       	(PERIPH_BASE + 0x10000000UL)	/*!< AHB2 BASE ADRESS */
#define AHB3PERIPH_BASE       	(PERIPH_BASE + 0x60001000UL)	/*!< AHB3 BASE ADRESS */

/*APB1 Peripherals*/
#define USART2_BASE				(APB1PERIPH_BASE+0x4400UL)		/*!< USART2 BASE ADRESS */
#define I2C1_BASE               (APB1PERIPH_BASE+0x5400UL)		/*!< I2C1 BASE ADRESS */
#define I2C2_BASE               (APB1PERIPH_BASE+0x5800UL)		/*!< I2C2 BASE ADRESS */

/*APB2 Peripherals*/
#define USART1_BASE				(APB2PERIPH_BASE+0x1000UL)		/*!< USART2 BASE ADRESS */
/*AHB1 Peripherals*/
#define GPIOA_BASE				AHB1PERIPH_BASE					/*!< GPIOA BASE ADRESS */
#define GPI0B_BASE				(AHB1PERIPH_BASE+0x0400UL)		/*!< GPIOB BASE ADRESS */
#define	GPIOC_BASE				(AHB1PERIPH_BASE+0x0800UL)		/*!< GPIOC BASE ADRESS */
#define	GPIOD_BASE				(AHB1PERIPH_BASE+0x0C00UL)		/*!< GPIOD BASE ADRESS */

#define RCC_BASE				(AHB1PERIPH_BASE+0x3800UL)		/*!< RCC BASE ADRESS*/

/*
 * Peripheral Structure Definitions
 */
#define _IO						volatile
typedef struct
{
	_IO uint32_t MODER;				/*<GPIO port mode register  					Address offset: 0x00 		*/
	_IO uint32_t OTYPER;			/*<GPIO port output type register  				Address offset: 0x04 		*/
	_IO uint32_t SPEEDR;			/*<GPIO port output speed register 				Address offset: 0x08 		*/
	_IO uint32_t PUPDR;				/*<GPIO port pull-up/pull-down register 		Address offset: 0x0C 		*/
	_IO uint32_t IDR;				/*<GPIO port input data register 				Address offset: 0x10 		*/
	_IO uint32_t ODR;				/*<GPIO port output data register 				Address offset: 0x14 		*/
	_IO uint32_t BSRR;				/*<GPIO port bit set/reset register 			Address offset: 0x18 		*/
	_IO uint32_t LCKR;				/*<GPIO port configuration lock register 		Address offset: 0x1C 		*/
	_IO uint32_t AFR[2];			/*<GPIO alternate function low/high register 	Address offset: 0x04 		*/

}GPIO_TypeDef_t;

typedef struct
{
	_IO uint32_t CR;			  	/*<RCC clock control register						Address offset: 0x00		*/
	_IO uint32_t PLLCFGR;		  	/*<RCC PLL configuration register					Address offset: 0x04		*/
	_IO uint32_t CFGR;			  	/*<RCC clock configuration register					Address offset: 0x08		*/
	_IO uint32_t CIR;			 	/*<RCC clock interrupt register						Address offset: 0x0C		*/
	_IO uint32_t AHB1RSTR;			/*<RCC AHB1 peripheral reset register		 		Address offset: 0x10		*/
	_IO uint32_t AHB2RSTR;			/*<RCC AHB2 peripheral reset register 				Address offset: 0x14		*/
	_IO uint32_t AHB3RSTR;			/*<RCC AHB3 peripheral reset register				Address offset: 0x18		*/
	_IO uint32_t RESERVED0;			/*<--RESERVED--																	*/
	_IO uint32_t APB1RSTR;			/*<RCC APB1 peripheral reset register				Address offset: 0x20		*/
	_IO uint32_t APB2RSTR;			/*<RCC APB2 peripheral reset register				Address offset: 0x24		*/
	_IO uint32_t RESERVED1[2];		/*<--RESERVED--																	*/
	_IO uint32_t RCC_AHB1ENR;		/*<RCC AHB1 peripheral clock enable register		Address offset: 0x30		*/
	_IO uint32_t RCC_AHB2ENR;		/*<RCC AHB2 peripheral clock enable register					Address offset: 0x34		*/
	_IO uint32_t RCC_AHB3ENR;		/*<RCC AHB3 peripheral clock enable register					Address offset: 0x38		*/
	_IO uint32_t RESERVED2;			/*<--RESERVED--																	*/
	_IO uint32_t RCC_APB1ENR;		/*<RCC APB1 peripheral clock enable register					Address offset: 0x40		*/
	_IO uint32_t RCC_APB2ENR;		/*<RCC APB2 peripheral clock enable register					Address offset: 0x44		*/
	_IO uint32_t RESERVED3[2];		/*<--RESERVED--																	*/
	_IO uint32_t AHB1LPENR;			/*<RCC AHB1 peripheral clock enable in low power mode register	Address offset: 0x50	*/
	_IO uint32_t AHB2LPENR;			/*<RCC AHB2 peripheral clock enable in low power mode register	Address offset: 0x54	*/
	_IO uint32_t AHB3LPENR;			/*<RCC AHB3 peripheral clock enable in low power mode register	Address offset: 0x58	*/
	_IO uint32_t RESERVED4;
	_IO uint32_t APB1LPENR;
	_IO uint32_t APB2LPENR;
	_IO uint32_t RESERVED5[2];
	_IO uint32_t BDCR;
	_IO uint32_t CSR;
	_IO uint32_t RESERVED6[2];
	_IO uint32_t SSCGR;
	_IO uint32_t PLLI2SCFGR;
	_IO uint32_t PLLSAICFGR;
	_IO uint32_t DCKCFGR;
	_IO uint32_t CKGATENR;
	_IO uint32_t DCKCFGR2;
}RCC_Typedef_t;

#define GPIOA    ((GPIO_TypeDef_t *)(GPIOA_BASE))
#define GPIOB    ((GPIO_TypeDef_t *)(GPIOB_BASE))
#define GPIOC    ((GPIO_TypeDef_t *)(GPIOC_BASE))
#define GPIOD    ((GPIO_TypeDef_t *)(GPIOD_BASE))
#define RCC		 ((RCC_TypeDef_t *)(RCC_BASE))



















#endif
