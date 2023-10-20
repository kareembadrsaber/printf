#include "main.h"

/**
 * kd_printf_char - prints a char.
 * @kd_list: arguments.
 * Return: 1.
 */
int kd_printf_char(va_list kd_list)
{
	char kd_s;

	kd_s = va_arg(kd_list, int);
	kd_putchar(kd_s);
	return (1);
}
