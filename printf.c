#include "main.h"
#include <stdarg.h>

/**
 * printf -  function for the standard printf
 * @format: The format string
 *
 * Return: Number of characters printed 
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;
	int i = 0;

	va_start(args, format);

	while (format && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else
		{
			i++;
			switch (format[i])
			{
				case 'c':
					len += _putchar(va_arg(args, int));
					break;
				case 's':
					len += printf("%s", va_arg(args, char *));
					break;
				case '%':
					len += _putchar('%');
					break;
				default:
					_putchar('%');
					_putchar(format[i]);
					len += 2;
					break;
			}
		}
		i++;
	}
	va_end(args);

	return (len);
}
