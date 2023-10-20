#include "main.h"

/**
 * kd_printf_rot13 - printf str to ROT13 place into buffer.
 * @kd_args: type struct va_arg where is allocated printf arguments.
 * Return: counter.
 */
int kd_printf_rot13(va_list kd_args)
{
	int kd_i, kd_j, kd_counter = 0;
	int kd_k = 0;
	char kd_s = va_arg(kd_args, char);
	char kd_alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char kd_beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (kd_s == NULL)
		kd_s = "(null)";
	for (kd_i = 0; kd_s[kd_i]; kd_i++)
	{
		kd_k = 0;
		for (kd_j = 0; kd_alpha[kd_j] && !kd_k; kd_j++)
		{
			if (kd_s[kd_i] == kd_alpha[kd_j])
			{
				kd_putchar(kd_beta[kd_j]);
				kd_counter++;
				kd_k = 1;
			}
		}
		if (!kd_k)
		{
			kd_putchar(kd_s[kd_i]);
			kd_counter++;
		}
	}
	return kd_counter;
}
