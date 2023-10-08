#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Description: code that prints all possible combinations
 * of two two-digit numbers from 0 to 99. numbers seperated
 * by space.
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 99 ; i++)
	{
		for (j = 0 ; j <= 99 ; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
