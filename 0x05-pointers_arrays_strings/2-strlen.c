#include "main.h"

/**
* _strlen - Returns the length of a string.
*
* Return: The length
*/



int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
