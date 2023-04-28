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
		n *= -1;
		i = n;
		_putchar('-');
	}
	i /= 0;

	if (i != 0)
	{
		print_number(i);
	}

	_putchar((unsigned int) n % 10 + '0');
}
