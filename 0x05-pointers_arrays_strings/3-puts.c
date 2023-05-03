#include "main.h"
/**
  *_puts -  prints a string to stdout
  *@str: string
  */

void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
