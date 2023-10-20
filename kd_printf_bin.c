#include "main.h"

/**
 * kd_printf_bin - prints a binary number.
 * @kd_list: arguments.
 * Return: 1.
 */
int kd_printf_bin(va_list kd_list)
{
	int kd_flag = 0;
	int kd_cont = 0;
	int kd_i, kd_a = 1, kd_b;
	unsigned int kd_num = va_arg(kd_list, unsigned int);
	unsigned int kd_p;

	for (kd_i = 0; kd_i < 32; kd_i++)
	{
		kd_p = ((kd_a << (31 - kd_i)) & kd_num);
		if (kd_p >> (31 - kd_i))
			kd_flag = 1;
		if (kd_flag)
		{
			kd_b = kd_p >> (31 - kd_i);
			kd_putchar(kd_b + 48);
			kd_cont++;
		}
	}
	if (kd_cont == 0)
	{
		kd_cont++;
		kd_putchar('0');
	}
	return kd_cont;
}
