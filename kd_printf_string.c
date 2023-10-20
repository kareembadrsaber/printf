#include "main.h"

/**
 * kd_printf_string - print a string.
 * @kd_list: argument.
 * Return: the length of the string.
 */
int kd_printf_string(va_list kd_list)
{
    char *kd_str;
    int kd_i, kd_len;

    kd_str = va_arg(kd_list, char *);
    if (kd_str == NULL)
    {
        kd_str = "(null)";
        kd_len = kd_strlen(kd_str);
        for (kd_i = 0; kd_i < kd_len; kd_i++)
            kd_putchar(kd_str[kd_i]);
        return kd_len;
    }
    else
    {
        kd_len = kd_strlen(kd_str);
        for (kd_i = 0; kd_i < kd_len; kd_i++)
           kd _putchar(kd_str[kd_i]);
        return kd_len;
    }
}
