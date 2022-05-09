#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked - allocates memory using malloc
 *@b: size of malloc
 *Return: pointer to allocate memory
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (ptr);
}
