#include "main.h"

/**
  *reverse_array - reverses content of an array
  *@a: array of integers
  *@n: number of elements to swap
  *return: the reversed array
  */
void reverse_array(int *a, int n)
{
	int temp, start, end;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		temp = *(a + start);
		*(a + start) = *(a + end);
		*a(a + end) = temp;
		start++;
		end--;
	}
}
