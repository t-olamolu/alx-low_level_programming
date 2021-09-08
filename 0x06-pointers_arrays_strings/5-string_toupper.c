#include "main.h"

/**
 * string_toupper - makes a string uppercase
 * @s: string to make uppercase
 *
 * Return: s
 */
char *string_toupper(char *s)
{
	char *s_tmp = s;

	while ((*s = *s >= 'a' && *s <= 'z' ? *s - ('a' - 'A') : *s))
		++s;

	return (s_tmp);
}
