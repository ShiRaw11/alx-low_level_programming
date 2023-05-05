#include "main.h"

/**
  *_strcat - appends the src string to the dest string
  *@dest: string
  *@src: string to be concatenated
  *Return:  pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	int d, s;

	d = 0;
	s = 0;


	while (dest[d] != '\0')
	{
		d++;
	}

	while (src[s] != '\0')
	{
		dest[d]= src[s];
		d++;
		s++;

	}
	dest[d] = '\0';


	return (dest);
}

