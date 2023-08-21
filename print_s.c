#include "main.h"

/**
 * print_s - print a string or char argument
 * @args: va_list containing the string or char to print as the next element
 *
 * Return: the number of bytes printed
 */

int print_s(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;
	int moSo;

	if (!str)
		str = "(null)";

	while (*str)
	{
		moSo = m_char(*str);
		if (moSo == -1)
			return (-1);
		count++;
		str++;
	}

	return (count);
}
