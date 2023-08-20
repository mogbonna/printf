#include "main.h"
/**
 *_printf - function implementation for the std printf
 *@format: the string to be used
 *Return: 0 on success
 */
int _printf(const char *format, ...)
{
int length = 0;
char *test;
va_list rest_arguments;
va_start(rest_arguments, format);
/* Printing a string without an access specifier*/
if (check_spec(format) == 0)
{
while (*format != '\0')
{
write(1, format, sizeof(*format));
length++;
format++;
}
}
if (check_spec(format) != 0)
{
while (*format != '\0')
{
if (*format == '%' && (*(format + 1) == 'c' || *(format + 1) == 's'))
{
format++;
}
if ('c' == *format && *(format - 1) == '%')
{
_putchar(va_arg(rest_arguments, int));
va_end(rest_arguments);
format++;
length++;
}
if ('s' == *format && *(format - 1) == '%')
{
test = va_arg(rest_arguments, char *);
va_end(rest_arguments);
while (*test != '\0')
{
write(1, test, sizeof(*test));
length++;
test++;
}
format++;
}
if ('%' == *format && *(format - 1) == '%')
{
format++;
write(1, format, sizeof(*format));
format++;
length++;
}
write(1, format, sizeof(*format));
format++;
length++;
}
}
return (length);
}
