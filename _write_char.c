#include "main.h"

/**
 * _write_char
 * @c: char
 * Return: (0 or 1)
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}

