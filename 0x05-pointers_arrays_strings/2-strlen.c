#include "main.h"

/**
 * swap_int - swap the valuses of two integers a and b
 *@a: A pointer to an int that will be updated
 *@b: B pointer to an int that will be updated
 * Return: void that means our answer is correct
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
