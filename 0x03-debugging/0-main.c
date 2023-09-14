#include "main.h"
#include <stdio.h>

// Function prototype for positive_or_negative
void positive_or_negative(int n);

/**
 * main - Test function for positive or negative
 * Return: 0
 */
int main(void)
{
int i = 0;
positive_or_negative(i);
return (0);
}
/**
 * positive_or_negative - prints if an integer is positive or negative
 * @n: The integer to check
 */
void positive_or_negative(int n)
{
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
}
