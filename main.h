#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/*This file is to keep the function prototypes*/
int _printf(const char *format, ...);
int _putchar(char c);
int check_spec(const char *format);
const char *check_address(const char *format);
int print_simple(const char *, int);
#endif
