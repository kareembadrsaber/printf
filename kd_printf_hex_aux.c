#include "main.h"

/**
 * kd_printf_hex_aux - prints a hexadecimal number.
 * @kd_num: arguments.
 * Return: counter.
 */
int kd_printf_hex_aux(unsigned long int kd_num)
{
	long int kd_i;
	long int *kd_array;
	long int kd_counter = 0;
	unsigned long int kd_temp = kd_num;

	while (kd_num / 16 != 0)
	{
		kd_num /= 16;
		kd_counter++;
	}
	kd_counter++;
	kd_array = malloc(kd_counter * sizeof(long int));

	for (kd_i = 0; kd_i < kd_counter; kd_i++)
	{
		kd_array[kd_i] = kd_temp % 16;
		kd_temp /= 16;
	}
	for (kd_i = kd_counter - 1; kd_i >= 0; kd_i--)
	{
		if (kd_array[kd_i] > 9)
			kd_array[kd_i] = kd_array[kd_i] + 39;
		kd_putchar(kd_array[kd_i] + '0');
	}
	free(kd_array);
	return kd_counter;
}
