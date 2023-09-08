#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of float: %lu bytes\n", sizeof(float));
	printf("Size of long: %lu bytes\n", sizeof(long));
	printf("Size of long long: %lu bytes\n", sizeof(long long));
	printf("Size of char: %lu byte\n", sizeof(char));
	return (0);
}
