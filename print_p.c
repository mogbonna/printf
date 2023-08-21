#include "main.h"

/**
 * print_pointer - convert and print an unsigned long int in hexadecimal
 * @ptr: the address of the pointer to print
 * @count: the number of bytes printed
 *
 * Description: This function is almost identical to print_lowerHex except
 * it takes an unsigned long int instead of an int.
 *
 * Return: void
 */

void print_pointer(unsigned long ptr, int *count)
{
	int moSo;

	if (ptr > 15)
		print_pointer(ptr >> 4, count);

	if (*count == -1)
		return;

	if ((ptr & 15) < 10)
		moSo = m_char('0' + (ptr & 15));
	else
		moSo = m_char('a' + (ptr & 15) % 10);

	if (moSo == -1)
		*count = -1;
	else
		*count += moSo;
}

/**
 * print_p - print a pointer address in lowercase hexadecimal format
 * @args: va_list containing the pointer to print as the next element
 *
 * Return: the number of bytes printed
 */

int print_p(va_list args)
{
	int count = 0;
	void *ptr = va_arg(args, void *);

	if (!ptr)
		return (_printf("(nil)"));

	count = _printf("0x");

	if (count == -1)
		return (count);

	print_pointer((unsigned long) ptr, &count);

	return (count);
}
