#include <stdio.h>

/**
 * main - Prints the size of various types base on
 * the computer it is compiled and run on.. 
 * Return: Always 0.
 */
int main(void)
{
	printf("Size a char: %lu byte(s)\n", sizeof(char));
	printf("Size an int: %lu byte(s)\n", sizeof(int));
	printf("Size a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
