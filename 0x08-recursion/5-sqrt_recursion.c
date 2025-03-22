#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return sqrt_helper(n, 0, n);
}

/**
 * sqrt_helper - performs binary search to find the integer square root
 * @low: lowest range
 * @high: highest range
 * Return: square root
 */

int sqrt_helper(int n, int low, int high)
{
	int mid = (low + high) / 2;
	int midSq = mid * mid;

	if (low > high)
		return high;
	if (midSq == n)
		return mid;
	else if (midSq < n)
		return sqrt_helper(n, mid + 1, high);
	else
		return sqrt_helper(n, low, mid - 1);
}
