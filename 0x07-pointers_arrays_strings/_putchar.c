#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the characterto print
 * Return: On success l.
 * On error, -l is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
