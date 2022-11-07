#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initializes it with a char
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer to array or null
 **/
char *create_array(unsigned int size, char c)
{
	char *tee;
	unsigned int i;

	if (size == 0)
		return (NULL);
	tee = malloc(sizeof(char) * size);
	if (tee == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tee[i] = c;
		i++;
	}
	return (tee);
}
