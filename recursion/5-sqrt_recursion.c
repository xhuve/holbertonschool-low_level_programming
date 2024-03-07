#include "main.h"

/**
 * find_root - check the code
 * @n: integer.
 * @i: integer
 *
 * _sqrt_recursion - check the code
 * @n: integer
 *
 * Return: Thing.
 */

int find_root(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i == n || n <= i)
	{
		return (-1);
	}
	return (find_root(n, i + 1));
}

int _sqrt_recursion(int n)
{
	return (find_root(n, 0));
}
