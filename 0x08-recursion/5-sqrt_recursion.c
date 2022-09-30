#include "main.h"

/**
 * _sqrt_recursion - return the natural square roots of a number
 * @n: number to be used
 *
 * Return: the quare root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}
