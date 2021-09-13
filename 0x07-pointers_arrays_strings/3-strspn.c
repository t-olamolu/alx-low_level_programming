#include "main.h"

/**
 * _strspn - gets the number of bytes from the start, which are in accept
 * @s: array to search
 * @accept: bytes to allow
 *
 * Return: the count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	char index[256] = {0};

	while (*accept)
		index[(int)*accept++] = 1;
	while (*s && index[(int)*s++])
		i++;
	return (i);
}
