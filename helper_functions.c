#include "main.h"
/**
  * print_number - printing numbers
  * @n: the number.
  *
  * Return: void
  */
int  print_number(unsigned int n)
{
	int moso;
	unsigned int num = n;

	if (num / 10)
		print_number(num / 10);
	moso = m_char('0' + num % 10);
	if (moso == -1)
	{
		return (moso);
	}
	return (moso);
}

/**
* countDigits - count how many digits the number is
* @num: the number
*
* Return: the count
*/
int countDigits(unsigned int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}
/**
* countOctal - count how many digits the number is
* @num: the number
*
* Return: the count
*/
int countOctal(unsigned int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num /= 8;
	}
	return (count);
}
/**
* countBinary - count how many digits the number is
* @num: the number
*
* Return: the count
*/
int countBinary(unsigned int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num /= 2;
	}
	return (count);
}

/**
 * _strlen - count the number of characters in a string
 * @str: pointer to a string
 *
 * Return: number of characters in the string
 */

int _strlen(char *str)
{
	int count = 0;

	while (*(str + count))
		count++;

	return (count);

#include <stdio.h>

/**
 * rev_string - reverses a string in place
 *
 * @s: string to reverse
 * Return: A pointer to a character
 */
char *rev_string(char *s)
{
	int len;
	int head;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}

/**
 * write_base - sends characters to be written on standard output
 * @str: String to parse
 */
void m_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		m_char(str[i]);
}

/**
 * base_len - Calculates the length for an octal number
 * @num: The number for which the length is being calculated
 * @base: Base to be calculated by
 * Return: An integer representing the length of a number
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}

/**
 * _memcpy - copy memory area
 * @dest: Destination for copying
 * @src: Source to copy from
 * @n: The number of bytes to copy
 * Return: The _memcpy() function returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
