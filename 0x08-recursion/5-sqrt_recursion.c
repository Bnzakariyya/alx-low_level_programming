#include "main.h"

/**
 * _sqrt_recursion - find natural square root of number
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root of number
 * @n: int variable name to find square root
 * @val: square root
 * Return: int
 */

int square(int n, int val)
{

	if (val * val == n)
		return (val);
	else if (val * val < n)
		return  (square(n, val + 1));
	else
		return (-1);

}
