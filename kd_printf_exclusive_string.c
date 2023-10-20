#include "main.h"

/**
 * kd_printf_exclusive_string - print exclusive string.
 * @kd_list: argument.
 * Return: the length of the string.
 */
int kd_printf_exclusive_string(va_list kd_list)
{
	char *kd_s;
	int kd_i, kd_len = 0;
	int kd_cast;

	kd_s = va_arg(kd_list, char *);
	if (kd_s == NULL)
		kd_s = "(null)";
	for (kd_i = 0; kd_s[kd_i] != '\0'; kd_i++)
	{
		if (kd_s[kd_i] < 32 || kd_s[kd_i] >= 127)
		{
			kd_putchar('\\');
			kd_putchar('x');
			kd_len = kd_len + 2;
			kd_cast = kd_s[kd_i];
			if (kd_cast < 16)
			{
				kd_putchar('0');
				kd_len++;
			}
			kd_len = kd_len + kd_printf_HEX_aux(kd_cast);
		}
		else
		{
			kd_putchar(kd_s[kd_i]);
			kd_len++;
		}
	}
	return kd_len;
}
