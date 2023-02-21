#include "main.h"
/**
  *main - Entry point
  *Description:  a function that prints the alphabet, in lowercase
  */

void print_alphabet(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		_putchar(d);
	}

	_putchar('\n');
}
