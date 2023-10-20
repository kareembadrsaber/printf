/* main.h */

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

typedef struct ConversionInfo
{
	char *kd;
	int (*f)();
} ConversionInfo;

int printPointer(va_list list);
int printHexAux(unsigned long int num);
int printExclusiveString(va_list list);
int printHexUpper(va_list list);
int printHex(va_list list);
int printOctal(va_list list);
int printUnsigned(va_list list);
int printBinary(va_list list);
int printStrRev(va_list list);
int printInt(va_list list);
int printDecimal(va_list list);
int printPercent(void);
int printChar(va_list list);
int printString(va_list list);
int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *str);
int _strcpy(char *dest, char *src);
int _strlenc(const char *str);
int reverseString(char *str);

#endif
