#include "main.h"
/**
  *_strlen - prints the lenghth of string
  *@s: string to show length
  *Return: string length
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
