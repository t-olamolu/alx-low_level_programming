#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: prints the alphabet in lowercase
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
