#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	char s1[98] = "dest ";
	char s2[] = "src\n";
	char *ptr;
	ptr = _strcat(s1, s2);
	return (ptr);
}
