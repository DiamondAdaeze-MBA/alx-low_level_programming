#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the charater to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and erron is sat appropriately.
 */
int _putchar (char c)
{
	return (write(1,  &c, 1));
}
