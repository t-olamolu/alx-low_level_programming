#include <stdio.h>
#include "main.h"

/**
 * _islower - returns 1 if c is a lowercase letter
 * @c: the character to check
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
