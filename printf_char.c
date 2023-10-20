/* printf_char.c */

#include "main.h"

int printChar(va_list list)
{
	char c;

	c = va_arg(list, int);
	_putchar(c);
	return (1);
}
