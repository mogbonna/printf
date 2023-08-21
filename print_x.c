#include "main.h"

/**
 * print_lowerHex - simultaneous convert and print integer in hexadecimal
 * @num: the number to print in hexadecimal
 * @count: pointer to counter of the number of bytes printed
 *
 * Return: void
 */

void print_lowerHex(unsigned int num, int *count)
{
	int moSo;

	/* if num > 0xf, recursion */
	if (num > 15)
		print_lowerHex(num >> 4, count);

	/* break out of recursion if _putchar fails */
	if (*count == -1)
		return;

	/* if num vs 0xf < 0xa, print 0-9 */
	if ((num & 15) < 10)
		moSo = m_char('0' + (num & 15));

	/* if num vs 0xf > 0xa, print a-f */
	else
		moSo = m_char('a' + (num & 15) % 10);

	/* if putchar fails, returns -1 */
	if (moSo == -1)
		*count = -1;
	else
		*count += moSo;
}

/**
 * print_x - print an integer in lowercase hexadecimal
 * @args: va_list with integer to print as current element
 *
 * Return: number of bytes printed
 */

int print_x(va_list args)
{
	int count = 0;

	print_lowerHex(va_arg(args, int), &count);

	return (count);
}
