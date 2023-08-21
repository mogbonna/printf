#include "main.h"
/**
  * print_F - prints FAIR
  * @args: the arguments, but they don't matter
  *
  * Return: characters printed
  *
  */
int print_F(__attribute__ ((unused))va_list args)
{
	char *F = "FAIR";
	int moSo = 0;
	int i;

	for (i = 0; i < 4; i++)
	{
		moSo = m_char(F[i]);
	if (moSo == -1)
		return (moSo);
	}
	return (4);
}
