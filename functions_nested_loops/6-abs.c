#include "main.h"

/**
 * _abs - Program entry point
 * @param n number
 *
 * Return:  0 on success. Error code otherwise
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
