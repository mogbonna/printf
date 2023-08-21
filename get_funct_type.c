#include "main.h"

/**
 * get_function - determine which print function to use
 * @specifier: the character that identifies the type to print
 *
 * Return: pointer that match function
 */

int (*get_function(const char *specifier))(va_list)
{
	int cm;

	type_t types[] = {
		{"s", print_s},
		{"c", print_c},
		{"d", print_d},
		{"i", print_d},
		{"b", print_b},
		{"o", print_o},
		{"u", print_u},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"R", rot13},
		{"r", print_rev},
		{"F", print_F},
		{NULL, NULL}
	};

	for (cm = 0; types[cm].identifier; cm++)
	{
		if (*specifier == types[cm].identifier[0])
			return (types[cm].print);
	}

	return (NULL);
}
