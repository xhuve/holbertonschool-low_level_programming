#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char is: %li byte(s)\n", sizeof(char));
	printf("Size of a int is: %li byte(s)\n", sizeof(int));
	printf("Size of a long int is: %li byte(s)\n", sizeof(long int));
	printf("Size of a long long int is: %li byte(s)\n", sizeof(long long int));
	printf("Size of a float is: %li byte(s)\n", sizeof(float));

	return (0);
}
