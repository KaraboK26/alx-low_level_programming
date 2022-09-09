#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: printing the alphabet
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
