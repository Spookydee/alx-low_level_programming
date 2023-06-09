#include "main.h"

/**
 * factorial - calculating factorial of a number
 * @n: number to be calculated
 * Return: integer value
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
