#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
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

/*This file is to keep the function prototypes*/
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

#endif
