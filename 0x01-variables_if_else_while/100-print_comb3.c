#include<stdio.h>
/**
* main - print size of various types
* Return: the 0 (Success)
*/

int main(void)
{
	int num;
	int b;

	for (num = 49; num <= 57; num++)
	{
		for(b = 48; b < num; b++)
		{
			if (num != 49)
				putchar(',');
			putchar(b);
			putchar(num);
			putchart(' ');
		}
	}
	putchar('\n');
	return (0);
}
