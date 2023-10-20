#include "main.h"

/**
 * kd_printf_pointer - prints a hexadecimal number.
 * @kd_val: arguments.
 * Return: counter.
 */
int kd_printf_pointer(va_list kd_val)
{
	void *kd_p;
	char *kd_s = "(nil)";
	unsigned long int kd_a;
	int kd_b;
	int kd_i;

	kd_p = va_arg(kd_val, void*);
	if (kd_p == NULL)
	{
		for (kd_i = 0; kd_s[kd_i] != '\0'; kd_i++)
		{
			kd_putchar(kd_s[kd_i]);
		}
		return (kd_i);
	}

	kd_a = (unsigned long int)kd_p;
	kd_putchar('0');
	kd_putchar('x');
	kd_b = kd_printf_hex_aux(kd_a);
	return (kd_b + 2);
}
