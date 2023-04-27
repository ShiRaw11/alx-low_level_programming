#include "main.h"
/**
  *print_line - draws a straight line in the terminal
  *@n: number of lines to draw
  *Return: straight line in the terminal
  */
void print_line(int n)
{
	int num;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num = 0; num < n; num++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
