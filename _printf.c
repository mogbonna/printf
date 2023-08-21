#include "main.h"
<<<<<<< HEAD

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*Calling parse function*/
	printed_chars = parse(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
=======
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
if(!format)
{
return (-1);
}
if (number_form == -1)
{
return (number_form);
}
if (number_form != 0 && va_arg(args_copy, char *) == NULL)
{
return (-1);
}
if (number_form == 0 && format != NULL)
{
length = print_simple(format, length);
}
if (number_form != 0)
{
while (*format != '\0')
{
if (*format == '%' && ((*(format + 1) == ' ') ||  (*(format + 1) == '\0') || (*(format + 1) == '\n')))
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
>>>>>>> ea2806eead4516f489b30e89f2e5e883dd7416f4
}
