#include "main.h"
#include <stdlib.h>

/**
 * malloca_chacked - A function that allocates memory using malloc.
 * @b: An unsigned input integer
 * Return: A pointer to allocate memory or NULL if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
