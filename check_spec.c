#include "main.h"
/**
 *check_spec - function to check if there are access specifiers
 *@format: the string to check from
 *Return: 0 on not finding
 */
int check_spec(const char *format)
{
int spec;
if (format == NULL)
{
return (-1);
}
while (*format != '\0')
{
if (*format == '%')
{
spec++;
}
if (*format == '%' && ((*(format + 1) == ' ') ||  (*(format + 1) == '\0') || (*(format + 1) == '\n')))
{
return (-1);
}
format++;
}
return (spec);
}
