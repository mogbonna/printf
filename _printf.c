#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */

int _printf(const char *format, ...)
{
	int cm = 0;
	va_list arglist;

	va_start(arglist, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format == 's')
			{
				printf("%s", va_arg(arglist, char *));
			}
			else if (*format == 'c')
			{
				putchar(va_arg(arglist, int));
			}
		}
		else
		{
			putchar(*format);
		}
		format++;
	}
	va_end(arglist);

	return (cm);
}
