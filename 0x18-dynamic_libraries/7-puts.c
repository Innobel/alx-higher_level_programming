#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _puts - Writes a string to stdout.
 * @s: The string to be written.
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
