#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Printing alphabets except q and e
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putschar(ch);
		}
	}
	putschar('\n');
	return (0);
}
