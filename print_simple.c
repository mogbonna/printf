#include "main.h"
/**
 *print_simple - function implementation for the std printf
 *@format: the string to be used
 *@length: length of string
 *Return: 0 on success
 */
int print_simple(const char *format, int length)
{
while (*format != '\0')
{
_putchar(*format);
length++;
format++;
}
return (length);
}
