#include "main.h"
#include <stdio.h>
/**
  *print_rev - print string in reverse
  *@s: string to reverse print
  *Return: void
  */

void print_rev(char *s)
{
	int d = 0;

	while (s[d] = '\0')
	{
		d++;
	}
	for (d -= 1; d >= 0; d--)
	{
		_putchar(s[d]);
	}
	_putchar('\n');
}
