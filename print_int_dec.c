#include "main.h"
/**
 *print_int_dec - function to print an integer argument.
 *@args: The argument passed to the function
 *Return: Number of ints.
 */
int print_int_dec(va_list args)
{
int arg = va_arg(args, int);
int num, last_num , mul_by = 1, dig, len = 0;
last_num  = arg % 10;
arg = arg / 10;
num = arg;
if (last_num < 0)
{
_putchar('-');
num = -num;
arg = -arg;
last_num = -last_num;
len++;
}
if (num > 0)
{
while (num / 10 != 0)
{
mul_by = mul_by * 10;
num = num / 10;
}
num = arg;
while (mul_by > 0)
{
dig = num / mul_by;
_putchar(dig + '0');
num = num - (dig * mul_by);
mul_by = mul_by / 10;
len++;
}
}
_putchar(last_num + '0');
len++;
return (len);
}
