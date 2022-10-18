#include "main.h"

/**
 * print_alphabet - prints alphabet
 * Return: 0 always
 */

void print_alphabet(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
