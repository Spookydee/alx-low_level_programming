#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - says if a number is a prime number
 * @n: number to be checked
 *
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (actual_prime(n, 1));
}

/**
 * actual_prime - calculates if a number is prime
 * @n: number to be checked
 * @i: iterate
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (actual_prime(n, i + 1));
}
