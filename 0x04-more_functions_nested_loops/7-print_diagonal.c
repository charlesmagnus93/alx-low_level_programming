#include "_putchar.h"
/**
 * print_diagonal - Print diagonal
 * @n: value to verify
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, u;

		for (i = 1; i <= n; i++)
		{
			for (u = 1; u <= n; u++)
			{
				if (i == u)
					_putchar('\\');
				else if (u < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
