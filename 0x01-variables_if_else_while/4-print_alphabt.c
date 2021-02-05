#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
		if (l == 'e' && l == 'q')
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
