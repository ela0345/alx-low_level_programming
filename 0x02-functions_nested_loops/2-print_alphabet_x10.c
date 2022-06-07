#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	for (int a = 0; a < 10; a++)
	{
		for (int b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}

		_putchar('\n');
	}
}


