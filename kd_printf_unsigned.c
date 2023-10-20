#include "main.h"

/**
 * kd_printf_unsigned - prints an unsigned integer.
 * @kd_args: argument to print.
 * Return: number of characters printed.
 */
int kd_printf_unsigned(va_list kd_args)
{
	unsigned int kd_n = va_arg(kd_args, unsigned int);
	int kd_num, kd_last = kd_n % 10, kd_digit, kd_exp = 1;
	int kd_i = 1;

	kd_n = kd_n / 10;
	kd_num = kd_n;

	if (kd_last < 0)
	{
		kd_putchar('-');
		kd_num = -kd_num;
		kd_n = -kd_n;
		kd_last = -kd_last;
		kd_i++;
	}
	if (kd_num > 0)
	{
		while (kd_num / 10 != 0)
		{
			kd_exp = kd_exp * 10;
			kd_num = kd_num / 10;
		}
		kd_num = kd_n;
		while (kd_exp > 0)
		{
			kd_digit = kd_num / kd_exp;
			kd_putchar(kd_digit + '0');
			kd_num = kd_num - (kd_digit * kd_exp);
			kd_exp = kd_exp / 10;
			kd_i++;
		}
	}
	kd_putchar(kd_last + '0');

	return kd_i;
}
