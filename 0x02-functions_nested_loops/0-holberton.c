#include "main.h"

/**
 * main - starting point of the program
 *
 * Description: prints Holberton
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{
	char *msg = "Holberton";
	int i;

	for(i = 0; i < 10; i++)
		_putchar(msg[i]);

	_putchar('\n');
	return (0);
}
