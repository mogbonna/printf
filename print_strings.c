#include "main.h"
/**
*print_strings - Print a string being passed as an argument
*@arg_p: the argument passed to the printf
*Return: the length of the string
*/
int print_strings(va_list arg_p)
{
char *val;
int len = 0, i;
val = va_arg(arg_p, char *);
if (val == NULL)
{
val = "(null)";
len = str_len(val);
for (i = 0; i < len; i++)
{
_putchar(val[i]);
}
return (len);
}
else
{
len = str_len(val) - 1;
for (i = 0; i < len; i++)
{
_putchar(val[i]);
}
}
return (len);
}
