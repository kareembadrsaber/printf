#include "main.h"

/**
 * kd_strlen - Returns the length of a string.
 * @kd_str: Type constant char pointer.
 * Return: The length of the string.
 */
int kd_strlen(const char *kd_str)
{
    int kd_c;

    for (kd_c = 0; kd_str[kd_c] != 0; kd_c++)
        ;
    return (kd_c);
}

/**
 * kd_strlenc - Strlen function but applied for constant char pointer s.
 * @kd_str: Type constant char pointer.
 * Return: The length of the string.
 */
int kd_strlenc(const char *kd_str)
{
    int kd_c;

    for (kd_c = 0; kd_str[kd_c] != 0; kd_c++)
        ;
    return (kd_c);
}
