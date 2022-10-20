#include "main.h"

/**
 * _isupper - Prints the last digit
 *
 * @c: input number as an integer.
 *
 * Return: last digit.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
