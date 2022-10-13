#include <stdio.h>
#include <unistd.h>

/**
 * main - Main Function to write a quote
 * Return: Return 1 if successful
 */

int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, q, 60);
	return (1);
}

