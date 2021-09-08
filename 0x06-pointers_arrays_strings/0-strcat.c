#include "main.h"

/**
 * _strcat - concats src to dest
 * @dest: array to start with
 * @src: array to copy from
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_tmp = dest;

	while (*dest)
		++dest;
	while ((*dest++ = *src++))
		continue;
	return (dest_tmp);
}
