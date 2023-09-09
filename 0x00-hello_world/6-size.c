#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size a long long int: %lu byte(s)\n", (unsigned long)
sizeof(long long int));
	printf("Size a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
