#include "main.h"

/**
 *largest_number - returns the largest of 3 numbers
 *@a: first integer
 *@b: second integer
 *@c: third integer
 *Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

<<<<<<< HEAD
		if (a >= b && a >= c)
		{
			largest = a;
		}
		else if (b >= a && b >= c)
		{
			largest = b;
		}
		else
		{
			largest = c;								}
		return (largest);
}
=======
	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else if (c >= a && c >= b)
	{
		largest = c;
	}
>>>>>>> 70e39762497206525c15db154a25efe67197a402

	return (largest);
}
