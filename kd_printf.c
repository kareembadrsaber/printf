#include "main.h"

/**
 * kd_printf - is a function that selects the correct function to print.
 * @kd_format: identifier to look for.
 * Return: the length of the string.
 */
int kd_printf(const char *kd_format, ...)
{
	convert_match m[] = {
		{"%s", kd_printf_string}, {"%c", kd_printf_char},
		{"%%", kd_printf_37},
		{"%i", kd_printf_int}, {"%d", kd_printf_dec}, {"%r", kd_printf_srev},
		{"%R", kd_printf_rot13}, {"%b", kd_printf_bin}, {"%u", kd_printf_unsigned},
		{"%o", kd_printf_oct}, {"%x", kd_printf_hex}, {"%X", kd_printf_HEX},
		{"%S", kd_printf_exclusive_string}, {"%p", kd_printf_pointer}
	};

	va_list kd_args;
	int kd_i = 0, kd_j, kd_len = 0;

	va_start(kd_args, kd_format);
	if (kd_format == NULL || (kd_format[0] == '%' && kd_format[1] == '\0'))
		return (-1);

	while (kd_format[kd_i] != '\0')
	{
		kd_j = 13;
		while (kd_j >= 0)
		{
			if (m[kd_j].kd_mypointer[0] == kd_format[kd_i] && m[kd_j].kd_mypointer[1] == kd_format[kd_i + 1])
			{
				kd_len += m[kd_j].kd_f(kd_args);
				kd_i = kd_i + 2;
				goto Here;
			}
			kd_j--;
		}
		kd_putchar(kd_format[kd_i]);
		kd_len++;
		kd_i++;
	}

Here:
	va_end(kd_args);
	return kd_len;
}
