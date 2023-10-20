/* printf_srev.c */

#include "main.h"

int printStrRev(va_list list)
{
	char *str = va_arg(list, char *);
	int i;
	int j = 0;

	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(str[i]);
	return (j);
}
