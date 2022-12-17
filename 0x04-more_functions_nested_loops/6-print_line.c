#include "main.h"

/**
 * print_line - Draws a straight line using a character __.
 * @n: the number of _ character to be printed out.
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
}
