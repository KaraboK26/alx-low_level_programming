#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: last digit of a number
 * Return: 0
 */
int main(void)
{
	int n;
	int remaining;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	remaining = n % 10;

	if (remaining > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, remaining);
	}
	else if (remaining == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, remaining);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, remaining);
	}
	return (0);
}
