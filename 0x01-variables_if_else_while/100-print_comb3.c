#include <stdio.h>

/**
 * main - Prints the numbers
 * 
 * Return: Always (Success)
 */
int main(void)
{
	int c, x;

	for (c = '0'; c <= '9'; c++)
	{
		for (x = '0'; x <= '9'; x++)
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
