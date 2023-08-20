#include "main.h"
/**
 *check_address - check the address of the % sign
 *@format: the string
 *Return: 0 on success
 */
const char *check_address(const char *format)
{
while (*format != '\0')
{
if (*format == '%')
{
return (format);
}
format++;
}
return (NULL);
}
