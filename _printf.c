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
int number_form = check_spec(format);
va_list rest_arguments;
va_list args_copy;
va_start(rest_arguments, format);
va_copy(args_copy , rest_arguments);
/* Printing a string without an access specifier*/
if(format == NULL)
{
return (-1);
}
if (number_form != 0 && va_arg(args_copy, char *) == NULL)
{
return (-1);
}
if (number_form == 0 && !format)
{
length = print_simple(format, length);
}
if (number_form != 0)
{
while (*format != '\0')
{
if (*format == '%' && ((*(format + 1) == ' ') ||  (*(format + 1) == '\0')))
{
return (-1);
}
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
if (test == NULL)
{
return (-1);
}
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
