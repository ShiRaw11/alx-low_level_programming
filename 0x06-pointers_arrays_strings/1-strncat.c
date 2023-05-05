#include "main.h"

/**
  *_strncat - appends 2 strings
  *@dest: string one
  *@src: string to be concatenated
  *@n: bytes to be used
  *Return: pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int d, s;

	d = 0;
	s = 0;

	while (*(dest + d) != '\0')
	{
		d++;
	}
	while (*(src + s) != '\0' && (d < 97) && (s < n))
	{
		*(dest + d) = *(src + s);
		d++;
		s++;

	}

	*(dest + d) = '\0';

	return (dest);
}
