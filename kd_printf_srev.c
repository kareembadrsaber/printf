#include "main.h"

/**
 * kd_printf_srev - function that prints a string in reverse.
 * @kd_args: type struct va_arg where is allocated printf arguments.
 * Return: the string.
 */
int kd_printf_srev(va_list kd_args)
{
	char *kd_s = va_arg(kd_args, char*);
	int kd_i;
	int kd_j = 0;

	if (kd_s == NULL)
		kd_s = "(null)";
	while (kd_s[kd_j] != '\0')
		kd_j++;
	for (kd_i = kd_j - 1; kd_i >= 0; kd_i--)
		kd_putchar(kd_s[kd_i]);
	return kd_j;
}
