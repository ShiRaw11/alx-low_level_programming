#include<stdio.h>
#include<math.h>
/**
  *main - prints the largest prime factor
  *Return: Always 0(success)
  */

int main(void)
{
	long n, max;
	long number = 612852475143;
	double sq = sqrt(number);

	for (n = 1; n <= sq; n++)
	{
		if (number % n == 0)
		{
			max = number / n;
		}
	}

	printf("%ld\n", max);

	return (0);
}
