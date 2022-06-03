#include <stdio.h>

/**
 * main - Prints letters alphabetically
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char c;

	for (c = 'a'; c<='z'; c++)
	{
		putchar("%c\n", c);
	}

	return (0);
}
