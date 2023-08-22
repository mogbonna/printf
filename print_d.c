#include "main.h"
#include <stdio.h>
/**
  * print_d - prints decimal numbers, positive and negative
  * @args: the number i'm printing
  *
  * Return: count
  */
int print_d(va_list args)
{
	int num = va_arg(args, int);
/*	int digits = num; */
	int count = 0;
	int moso;
	unsigned int unsign;

	if (num < 0)
	{
		moso = m_char('-');
		if (moso == -1)
		{
			return (-1);
		}
		count += 1;
		unsign = -num;

	}
	else if (num == 0)
	{
		moso = m_char('0');
		if (moso == 1)
			return (1);
		else
			return (-1);
	}
	else
	{
		unsign = num;
	}

	moso = print_number(unsign);

	if (moso == 1)
	{
		count += countDigits(unsign);
	}
	else
		count = -1;
	return (count);
}
