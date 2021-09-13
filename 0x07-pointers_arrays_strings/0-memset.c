#include "main.h"

/**
 * _memset - fills s with b
 * @s: array to fill
 * @b: byte to fill with
 * @n: size of s
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *s_tmp  = s;

	while (n-- > 0)
		*(s++) = b;
	return (s_tmp);
}
