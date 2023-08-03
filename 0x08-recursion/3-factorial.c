#include "main.h"

/**
 * factorial - Calculate factorial
 * @n: number the faactorial
 * Return: integer value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
