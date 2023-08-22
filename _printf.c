#include "main.h"
/**
 *_printf - function implementation for the std printf
 *@format: the string to be used
 *Return: 0 on success
 */
int _printf(const char *format, ...)
{
int len = 0, i;
va_list args;
format_spec fm_arr[] = {
{"%s", print_strings},
{"%c", print_char},
{"%%", print_per},{"%i", print_int_dec},{"%d", print_int_dec}
};
va_start(args, format);
if (format == NULL ||  (format[0] == '%' && (format[1] == ('\0' || ' ' || '\n'))))
{
return (-1);
}
while (*format != '\0')
{
for (i = 0; i < 5 ; i++)
{
if (*format == fm_arr[i].spec[0] && *(format + 1) == fm_arr[i].spec[1])
{
len +=fm_arr[i].fun_ptr(args);
format++;
format++;
}
}
_putchar(*format);
format++;
len++;
}
va_end(args);
return (len);
}
