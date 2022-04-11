#include <stdio.h>
/**
 * main - print comb
 * Return: 0 (Success)
 */

int main(void)
{
        int num;
        int b;

        for (num = 48; num <= 57; num++)
        {
                for (b = 49; b <= 57; b++)
                {
                        if ((num == b) || (num >= b))
                        {
                                continue;
                        }
                        if ((num != b) || (num >= b))
                        {
                                putchar(num);
                                putchar(b);
                                putchar(',');
                                putchar(' ');
                        }
                }
        }
        putchar('\n');
        return (0);
}
