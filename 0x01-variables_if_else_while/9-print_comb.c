#include <stdio.h>
/**
 * main - program prints combination of 0-10
 *
 * Description: This peogram prints all the
 * possible conbinations of numbers
 * from 0 to 9.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 10 ; i < 20 ; i++)
	{
		putchar((i % 10) + '0');

		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
