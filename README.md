printf group project

kd_printf_pointer(va_list kd_list): Formats and prints a pointer value.
kd_printf_hex_aux(unsigned long int kd_num): Formats and prints a hexadecimal value (lowercase) from an unsigned long integer.
kd_printf_HEX_aux(unsigned int kd_num): Formats and prints a hexadecimal value (uppercase) from an unsigned integer.
kd_printf_exclusive_string(va_list kd_list): Prints a string from the argument list, handling non-printable characters.
kd_printf_HEX(va_list kd_list): Formats and prints hexadecimal values (uppercase) from the argument list.
kd_printf_hex(va_list kd_list): Formats and prints hexadecimal values (lowercase) from the argument list.
kd_printf_oct(va_list kd_list): Formats and prints octal values from the argument list.
kd_printf_unsigned(va_list kd_args): Formats and prints unsigned integer values from the argument list.
kd_printf_bin(va_list kd_list): Formats and prints binary values from the argument list.
kd_printf_srev(va_list kd_args): Reverses and prints a string from the argument list.
kd_printf_rot13(va_list kd_args): Applies the ROT13 cipher to a string from the argument list and prints the result.
kd_printf_int(va_list kd_args): Formats and prints integer values from the argument list.
kd_printf_dec(va_list kd_args): Formats and prints decimal values from the argument list.
kd_strlen(char *kd_s): Calculates and returns the length of a string.
kd__strcpy(char *kd_dest, char *kd_src): Copies a string from source to destination and returns the destination string.
kd_strlenc(const char *kd_str): Calculates and returns the length of a constant string.
kd_rev_string(char *kd_str): Reverses a string in-place.
kd__strlenc(const char *kd_str): Calculates and returns the length of a constant string (possibly a typo, as it is similar to kd_strlenc).
kd_printf_37(void): Prints the character '%' (ASCII code 37).
kd_printf_char(va_list kd_list): Prints a character from the argument list.
kd_printf_string(va_list kd_list): Prints a string from the argument list.
kd_putchar(char kd_c): Prints a single character.
kd_printf(const char *kd_format, ...): A variadic function that formats and prints data based on the provided format string and additional arguments.
