#include "main.h"

/**
 * is_prime - check the code
 * @n: integer.
 * @i: integer
 *
 *
 * is_prime_number - check the code
 * @n: integer
 *
 * Return: Thing.
 */

int is_prime(int n, int i)
{
	if (n % i == 0 || i >= n)
		return (0);
	if (i == n / 2)
		return (1);
	return (is_prime(n, i + 1));
}

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
