#include "main.h"

/**
 * kd_putchar - writes the character kd_c to stdout
 * @kd_c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int kd_putchar(char kd_c)
{
    return (write(1, &kd_c, 1));
}

