#include "main.h"

/**
 * find_root - find square root of n, starting from the smallest possible 0.
 * @n: n
 * @root: square root test number
 * Return: natural square root, or -1 if not natural root
 */

int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	root++;
	return (find_root(n, root));
}

/**
 * _sqrt_recursion - finds natural square root of n
 * @n: input number
 * Return: natural square root, or -1 if not natural root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}
