#include<stdio.h>
/**
  *main - prints all numbers of base 10 using putchar
  *Return: Always 0 (Success)
  */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	putchar('\n');

	return (0);
}
