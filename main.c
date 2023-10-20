#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * kd_main - Entry point
 *
 * Return: Always 0
 */
int kd_main(void)
{
    int kd_len;
    int kd_len2;
    unsigned int kd_ui;
    void *kd_addr;

    kd_len = kd_printf("Let's try to printf a simple sentence.\n");
    kd_len2 = printf("Let's try to printf a simple sentence.\n");
    kd_ui = (unsigned int)INT_MAX + 1024;
    kd_addr = (void *)0x7ffe637541f0;
    kd_printf("Length:[%d, %i]\n", kd_len, kd_len);
    printf("Length:[%d, %i]\n", kd_len2, kd_len2);
    kd_printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    kd_printf("Unsigned:[%u]\n", kd_ui);
    printf("Unsigned:[%u]\n", kd_ui);
    kd_printf("Unsigned octal:[%o]\n", kd_ui);
    printf("Unsigned octal:[%o]\n", kd_ui);
    kd_printf("Unsigned hexadecimal:[%x, %X]\n", kd_ui, kd_ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", kd_ui, kd_ui);
    kd_printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    kd_printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    kd_printf("Address:[%p]\n", kd_addr);
    printf("Address:[%p]\n", kd_addr);
    kd_len = kd_printf("Percent:[%%]\n");
    kd_len2 = printf("Percent:[%%]\n");
    kd_printf("Len:[%d]\n", kd_len);
    printf("Len:[%d]\n", kd_len2);
    kd_printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}

