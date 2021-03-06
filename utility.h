/*
 *  utility.h
 *  simple kernel for AVR
 *  Author: JP
 */ 

#ifndef UTILITY_H_
#define UTILITY_H_

/*** Utility and helper macros ***/

/* Timer Value Calculation */
#define TIMER_VAL_FROM_SEC(x)		(x)*1000

/* Register manipulation */
#define SET_REG(x, y)				(x) |= (y)
#define CLR_REG(x, y)				(x) &= ~(y)
#define ZERO_REG(x)				  (x) = 0

#define SET_REG_BIT(x, y)   (x) |= (1<<(y))
#define CLR_REG_BIT(x, y)   (x) &= ~(1<<(y))

#define OUT_PORT(x)					(x) |= 0xFF
#define IN_PORT(x)					(x) &= 0x00;
#define OUT_PIN(x, y)				((x) |= (1<<(y)))
#define IN_PIN(x, y)				((x) &=	~(1<<(y)))

#define SET_PORT(x, y)			(x) |= (y)
#define CLR_PORT(x, y)			(x) &= ~(y)
#define ZERO_PORT(x)			  (x) = 0
#define SET_PIN(x, y)				((x) |= (1<<(y)))
#define CLR_PIN(x, y)				((x) &= ~(1<<(y)))
#define GET_PORT(x)					(x)
#define GET_PIN(x, y)				((x) & (1<<(y)))

#define DELAY_MS(x)           _delay_ms(x)
#define DELAY_US(x)           _delay_us(x)

unsigned short f_hex_to_bin(char *hex_in);

void f_bin_to_hex(unsigned char bin_in, char *str_out);

unsigned char f_hex_byte_to_bin(char *hex_in);

#endif /* UTILITY_H_ */