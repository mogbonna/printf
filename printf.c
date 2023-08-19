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

	if (format == NULL)
		return (-1);

	va_start(arglist, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			cm++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%' || *format == 'c')
			{
				write(1, format, 1);
				cm++;
			}
			else if (*format == 's')
			{	char *str = va_arg(arglist, char *);
				int length = 0;

				while (str[length] != '\0')
					length++;
				write(1, str, length);
				cm += length;
			};
		}
		format++;
	}
	va_end(arglist);
	return (cm);
}
