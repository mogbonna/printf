#include "main.h"
/**
 *check_spec - function to check if there are access specifiers
 *@format: the string to check from
 *Return: 0 on not finding
 */
int check_spec(const char *format)
{
int spec;
while (*format != '\0')
{
if (*format == '%')
{
spec++;
}
format++;
}
return (spec);
}
