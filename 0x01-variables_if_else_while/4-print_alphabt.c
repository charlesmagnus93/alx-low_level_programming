#include<stdio.h>
/**
* main - print size of various types
* Return: the 0 (Success)
*/

int main(void)
{
	char alpha;
	char a = '\n';

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
		if (alpha == 'q' || alpha == 'e')
			continue;
		putchar(alpha);
	}
	putchar(a);
	return (0);
}
