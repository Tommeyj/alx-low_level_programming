#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && b >= c)
	{
		largest = a;
	}
	else if (b >= a && a >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}

int convert_day(int month, int day);
void print_remaining_days(int month, int day, int year);

#endif /* MAIN_H */
