#include "main.h"
/**
  *puts2 - prints every other character of a string
  *@str:string
  */
void puts2(char *str)
{
	int n = 0, i;

	while (str[n] != '\0')
	{
		n++;
	}

	for (i = 0; i < n; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
