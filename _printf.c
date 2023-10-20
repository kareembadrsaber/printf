/* _printf.c */

#include "main.h"

int _printf(const char *format, ...)
{
	ConversionInfo conversions[] = {
		{"%s", printString}, {"%c", printChar},
		{"%%", printPercent}, {"%i", printInt}, {"%d", printDecimal},
		{"%r", printStrRev}, {"%R", printHexUpper}, {"%b", printBinary},
		{"%u", printUnsigned}, {"%o", printOctal}, {"%x", printHex}, {"%X", printHexUpper},
		{"%S", printExclusiveString}, {"%p", printPointer}
	};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			length++;
			i++;
			continue;
		}

		for (j = 0; j < 14; j++)
		{
			if (format[i] == conversions[j].kd[0] && format[i + 1] == conversions[j].kd[1])
			{
				length += conversions[j].f(args);
				i += 2;
				break;
			}
		}

		if (j == 14)
		{
			_putchar('%');
			length++;
			i++;
		}
	}

	va_end(args);
	return (length);
}
