#include <stdio.h>

/**
 * main - Print the alphabet in lowercase
 *
 * and then in uppercase follow by new line
 *
 * Return: 0 if program run without error
 */
int main(void)
{
	char AB = 'A';

	while (AB <= 'Z')
	{
		putchar(AB);
		AB++;
	}

	putchar('\n');

	return (0);
}
