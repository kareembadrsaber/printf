/* printf_pointer.c */

#include "main.h"

int printPointer(va_list list)
{
	void *p;
	char *str = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(list, void*);
	if (p == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = printHexAux(a);
	return (b + 2);
}
