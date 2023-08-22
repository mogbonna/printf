#include "main.h"
/**
 *print_char - print a character
 *@args: the arguments passed
 *Return: the length of the character
 */
int print_char(va_list args)
{
char c;
c = va_arg(args, int);
_putchar(c);
return (1);
}
