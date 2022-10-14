#include <stdio.h>

/**
 * main - main function
 * Return: Returns 0 if successful
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');

	return (0);
}
