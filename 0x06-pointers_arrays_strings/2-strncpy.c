#include "main.h"

/**
  *_strncpy - copies a string
  *@dest: first string
  *@src: second string
  *@n: size of second string
  *Return: concated string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
