#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * my_printf - A simplified printf implementation for 'c', 's', '%', 'd', and 'i' specifiers
 * @format: The format string
 * @...: Additional arguments
 *
 * Return: Number of characters printed (excluding null byte)
 */
int printf(const char *format, ...)
{
    va_list args;
    int len = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format != '%')
        {
            _putchar(*format);
            len++;
        }
        else
        {
            format++; // Move past '%'
            switch (*format)
            {
                case 'c':
                    _putchar(va_arg(args, int));
                    len++;
                    break;
                case 's':
                    len += printf("%s", va_arg(args, char *));
                    break;
                case '%':
                    _putchar('%');
                    len++;
                    break;
                case 'd':
                case 'i':
                    len += printf("%d", va_arg(args, int));
                    break;
                default:
                    _putchar('%');
                    _putchar(*format);
                    len += 2;
                    break;
            }
        }
        format++;
    }

    va_end(args);
    return len;
}
