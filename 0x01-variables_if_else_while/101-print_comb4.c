#include <stdio.h>
/**
 * main - print comb
 * Return: 0 (Success)
 */

int main(void)
{
	int num;
	int a;
	int b;

	for (num = 48; num <= 57; num++)
	{
		for (b = 49; b <= 57; b++)
		{
			for (a = 49; a <= 57; a++)
			{
				if (num >= a || num >= b)
				{
					continue;
				} else
				{
					putchar(num);
					putchar(a);
					putchar(b);
					if ((num == 56 && b == 57) || (num == 56 && a == 57))
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
			}
	}
	putchar('\n');
	return (0);
}
