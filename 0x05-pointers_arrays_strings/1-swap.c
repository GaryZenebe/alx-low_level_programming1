#include "holberton.h"
/**
 * swap_int - swaps value of two integers
 * @a: is a pointer
 * @b: is a pointer
 * Return - nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
