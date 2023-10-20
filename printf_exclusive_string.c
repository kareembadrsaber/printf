/* printf_exclusive_string.c */

#include "main.h"

int printExclusiveString(va_list list)
{
	char *str;
	int i, length = 0;
	int cast;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			cast = str[i];
			if (cast < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + printHexAux(cast);
		}
		else
		{
			_putchar(str[i]);
			length++;
		}
	}
	return (length);
}
