#include "main.h"

int find_sqrt_root(int no, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt_root - find square root of n,
 * starting from the smallest possible, 0
 * @no: no
 * @root: test this root
 * Return: natural square root, or -1 if not natural root
 */

int find_sqrt_root(int no, int root)
{
	if (root * root > no)
		return (-1);

	if (root * root == no)
		return (root);

	return (find_sqrt_root(no, root + 1));
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: n
 * Return: natural square root, or -1 if not natural root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}
