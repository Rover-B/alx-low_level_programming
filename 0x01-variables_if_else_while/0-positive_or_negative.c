#include <stdio.h>
#include <stdlib.>
#include <time.h>

/**
 * main - print if the number is positive, negatve or 0
 * Return: ALways 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%D is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
