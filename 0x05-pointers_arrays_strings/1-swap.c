#include "main.h"
/**
  * swap_int - swaps the value of two integers
  *@a: an integer to swap
  *@b: another integer to swap
  *Return: void
  */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
