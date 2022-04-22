#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * Struct print_flags
 *
 * @c: specifier
 * @f: associated function
 */
struct print_flags
{
    char *c;
    char *(*f)(va_list list);
};
typedef struct print_flags flags_t;
int _printf(const char *format, ...);
int ret_position(const char *s, int i);
char *_strcat(char *dest, char *src, int n);
size_t _strlen(const char *s);
char *_strcpy(char *dest, char *src);
int numlen(int n);
char *rot13(va_list list);
char *reverse_str(char *s);
char *print_c(va_list list);
char *print_s(va_list list);
char *print_i(va_list list);
char *print_b(va_list list);
char *print_u(va_list list);
char *print_hex(va_list list);
char *print_hex_low(va_list list);
char *print_oct(va_list list);

#endif
