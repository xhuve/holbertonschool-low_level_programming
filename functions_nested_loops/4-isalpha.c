#include "main.h"

/**
 * main - Program entry point
 *
 *
 * Return:  0 on success. Error code otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return 1;
	} else
	{
		return 0;
	}
}
