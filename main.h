#ifndef MIAN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#include <string.h>
/**
*struct specifier - takes the options and check
*@spec:The format specifiers character
*@fun_ptr: function pointer to the function to call
*/
typedef struct specifier
{
char *spec;
int (*fun_ptr)();
} format_spec;
int m_char(char c);
int (*get_function(const char *specifier))(va_list);
int _printf(const char *format, ...);
int _putchar(char c);
int check_spec(const char *format);
const char *check_address(const char *format);
int print_simple(const char *, int);
int print_strings(va_list);
int print_char(va_list);
int print_per(va_list);
int print_int_dec(va_list);
int str_len(char *);
int _strlen(char *);
int print_rev(va_list args);
int rot13(va_list args);
int print_number(unsigned int n);
int countDigits(unsigned int num);
int countOctal(unsigned int num);
int countBinary(unsigned int num);
int print_b(va_list args);
int print_o(va_list args);
int print_d(va_list args);
int print_x(va_list args);
void print_lowerHex(unsigned int num, int *count);
int print_X(va_list args);
void print_upperHex(unsigned int num, int *count);
int print_p(va_list args);
int print_s(va_list args);
int print_c(va_list args);
int print_u(va_list args);
int print_F(va_list args);

#endif
