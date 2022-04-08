#include<stdio.h>
/**
* main - print size of various types
* Return: the 0 (Success)
*/

int main(void)
{
	char c;
	char a = ' ';

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar(a);
	return (0);
}
