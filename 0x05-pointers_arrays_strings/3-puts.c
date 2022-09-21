#include "main.h"

/**
* _puts - Write a function that prints a string, followed
* by a new line, to stdout.
* @str: an input string
* Return: Nothing
*/
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
