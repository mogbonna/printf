#include "main.h"
/**
 *str_len - function to print the length of a string
 *@str: the string to check the length
 *Return: the length of the string
 */
int str_len(char *str)
{
int length;
while (*str != '\0')
{
length++;
str++;
}
return (length);
}
