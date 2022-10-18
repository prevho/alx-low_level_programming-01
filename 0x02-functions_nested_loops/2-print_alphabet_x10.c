#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets x10
 * Return: returns zero ar the end
 */

void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}
