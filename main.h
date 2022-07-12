#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_int(va_list args);
int printf_dec(va_list args);
int _putchar(char c);
int printf_oct(va_list val);
int printf_pointer(va_list val);
int printf_exclusive_string(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_rot13(va_list args);
int printf_srev(va_list args);
int _strlen(char *s);
int _strlenc(const char *s);
int printf_string(va_list val);
int printf_unsigned(va_list args);

#endif

