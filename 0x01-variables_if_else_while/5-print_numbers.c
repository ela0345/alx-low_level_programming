#include <stdio.h>

/**
 * main - Prints base 10 numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;
	for (n = '0'; n <= '9'; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
