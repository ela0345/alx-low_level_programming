#include <stdio.h>

/**
 * main - Prints the numbers
 * 
 * Return: Always (Success)
 */
int main(void)
{
	char c, x;

	for (c = '0'; c < '10'; c++)
	{
		for (x = c+1; x < '10'; x++)
		{
			putchar(c);
			putchar(x);

			if (c != '9' || x !='9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');


	return (0);
}
