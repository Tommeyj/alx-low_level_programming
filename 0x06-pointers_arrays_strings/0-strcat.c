#include "main.h"

/**
* *_strcat - catenatte @src to @dest
*
* @dest: an input string
* @src: an input string
* Return: A pointer to the resulting string
*
*/

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest[length] != '\0')
	{++length;
	}
	for (j = 0; *src[j] != '\0'; ++j, ++length)
	{
		*dest[length] = *src[j];
	}
	*dest[length] = '\0';
	return (temp);
}
