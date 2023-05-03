#include "main.h"
/**
  *_strcpy - copies the string pointed to by src
  *@dest: pointer to buffer
  *@src: string
  *
  *Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}