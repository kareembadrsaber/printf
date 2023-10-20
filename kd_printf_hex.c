#include "main.h"

/**
 * kd_printf_hex - prints a hexadecimal number.
 * @kd_list: arguments.
 * Return: counter.
 */
int kd_printf_hex(va_list kd_list)
{
	int kd_i;
	int *kd_array;
	int kd_counter = 0;
	unsigned int kd_num = va_arg(kd_list, unsigned int);
	unsigned int kd_temp = kd_num;

	while (kd_num / 16 != 0)
	{
		kd_num /= 16;
		kd_counter++;
	}
	kd_counter++;
	kd_array = malloc(kd_counter * sizeof(int));

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
