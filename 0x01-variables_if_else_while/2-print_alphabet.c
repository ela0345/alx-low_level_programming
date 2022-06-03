#include <stdio.h>

/**
 * main - Prints letters alphabetically
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char c, nl = '\n';

	for (c = 'a'; c<='z'; c++)
	{
		putchar(c);
		putchar(nl);
	}

	return (0);
}
