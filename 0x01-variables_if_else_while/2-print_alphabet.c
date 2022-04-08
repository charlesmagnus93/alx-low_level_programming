#include<stdio.h>
/**
* main - print size of various types
* Return: the 0 (Success)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar("\n");
	return (0);
}
