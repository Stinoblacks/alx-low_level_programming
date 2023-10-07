#include <stdio.h>
/**
 * main - program that prints digits
 *
 *Description:  program that prints all digit
 *  numbers of base 10 starting from 0
 *  Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
