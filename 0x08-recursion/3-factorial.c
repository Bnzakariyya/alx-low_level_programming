#include "main.h"

/**
 * factorial - gives factorial of numbers
 * @n: int
 * Return: int
 */

int factorial(int n) {

	if (n < 0)
	
	
	{
		return (-1);
	}
	
	
	else if (n == 0)
	
	
	{
		return (1);
	}

	return (n * factorial(n - 1));

}
