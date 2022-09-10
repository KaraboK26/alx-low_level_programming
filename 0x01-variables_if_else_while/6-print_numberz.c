#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: printing numbers zero to nine
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%i", num);
	}
	printf("\n");
	return (0);
}
