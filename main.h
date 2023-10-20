#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @kd_mypointer: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @kd_f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *kd_mypointer;
	int (*kd_f)();
} convert_match;

int kd_printf_pointer(va_list kd_list);
int kd_printf_hex_aux(unsigned long int kd_num);
int kd_printf_HEX_aux(unsigned int kd_num);
int kd_printf_exclusive_string(va_list kd_list);
int kd_printf_HEX(va_list kd_list);
int kd_printf_hex(va_list kd_list);
int kd_printf_oct(va_list kd_list);
int kd_printf_unsigned(va_list kd_args);
int kd_printf_bin(va_list kd_list);
int kd_printf_srev(va_list kd_args);
int kd_printf_rot13(va_list kd_args);
int kd_printf_int(va_list kd_args);
int kd_printf_dec(va_list kd_args);
int kd_strlen(char *kd_str);
int *kd__strcpy(char *kd_dest, char *kd_src);
int kd_strlenc(const char *kd_str);
int kd_rev_string(char *kd_str);
int kd__strlenc(const char *kd_str);
int kd_printf_37(void);
int kd_printf_char(va_list kd_list);
int kd_printf_string(va_list kd_list);
int kd_putchar(char kd_c);
int kd_printf(const char *kd_format, ...);

#endif
