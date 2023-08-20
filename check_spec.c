#include "main.h"
/**
 *check_spec - function to check if there are access specifiers
 *@format: the string to check from
 *Retrun: 0 on not finding and the number on findin
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
