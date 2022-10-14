#include <stdio.h>

/**
 * main - main function
 * Return: Returns 0 if successful
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');

	return (0);
}
