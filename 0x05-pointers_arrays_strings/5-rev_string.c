#include "main.h"
/**
  *rev_string - reverses a string
  *@s: string
  */

void rev_string(char *s)
{
	char temp;
	int i, j, k;
	j = 0;
	k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	j = k - 1;

	for (i = 0; i < k / 2; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j--] = temp;
	}
}
