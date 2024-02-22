#include "main.h"

/**
 * _isalpha - Program entry point
 * @c: number
 *
 * Return:  0 on success. Error code otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
