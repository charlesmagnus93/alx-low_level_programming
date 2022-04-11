#include <stdio.h>
/**
 * main - print comb
 * Return: 0 (Success)
 */

int main(void)
{
        int num;
        int b;

        for (num = 48; num <= 57; numm++)
        {
                for (b = 49; b <= 57; b++)
                {
                        if (num >= b)
                        {
                                continue;
                        } else
                        {
                                putchar(num);
                                putchar(b);
                                if (nom == 56 && b == 57)
                                {
                                        continue;
                                }
                                putchar(',');
                                putchar(' ');
                        }
                }
        }
        putchar('\n');
        return (0);
}
