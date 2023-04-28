#include "main.h"
#include <stdio.h>
/**
  *print_number - prints an integer.
  *@n: Integer to print
  *Return: Always 0 (success)
  */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
	}

	if (i > 9)
	{
		print_number(i / 10);
	}

	_putchar(i % 10 + '0');
}
