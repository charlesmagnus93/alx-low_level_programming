#include<stdio.h>
/**
* main - print size of various types
* Return: the 0 (Success)
*/

int main(void)
{
	char alpha;
	char a = '\n';

	for (alpha = 'z'; alpha >= 'a'; --alpha)
	{
		putchar(alpha);
	}
	putchar(a);
	return (0);
}
