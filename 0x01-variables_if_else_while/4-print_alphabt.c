#include<stdio.h>
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
