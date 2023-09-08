#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        printf("Size of int: %d bytes\n", sizeof(intType));
        printf("Size of float: %d bytes\n", sizeof(floatType));
        printf("Size of double: %d bytes\n", sizeof(doubleType));
        printf("Size of char: %d byte\n", sizeof(charType));; 
        return (0);
}
