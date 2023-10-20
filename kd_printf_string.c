#include "main.h"
/**
 * kd_printf_string - print a string.
 * @kd_list: argument.
 * Return: the length of the string.
 */
int kd_printf_string(va_list kd_list)
{
	char *kd_s;
	int kd_i, kd_len;

	kd_s = va_arg(kd_list, char list*);
	if (kd_s == NULL)
	{
		kd_s = "(null)";
		kd_len = _strlen(kd_s);
		for (kd_i = 0; kd_i < kd_len; kd_i++)
			_putchar(kd_s[kd_i]);
		return (kd_len);
	}
	else
	{
		kd_len = _strlen(kd_s);
		for (kd_i = 0; kd_i < kd_len; kd_i++)
			_putchar(kd_s[kd_i]);
		return (kd_len);
	}
}

