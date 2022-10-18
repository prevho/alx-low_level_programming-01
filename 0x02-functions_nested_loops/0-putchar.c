#include "main.h"

/**
 * main - prints result
 * Return: 0 When successful
 */

int main(void)
{
	int i;
	char putty[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(putty[i]);
	}
	_putchar('\n');

	return (0);
}
