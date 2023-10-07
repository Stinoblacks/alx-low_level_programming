#include <stdio.h>
/**
 * main - program that prints numbers in base16
 *
 * Descrption: program prints all numbers
 * base 16, followed by a new line
 * Return: 0
 */
int main(void)
{
	char b;

	for (b = '0' ; b <= '9' ; b++)
	{
		putchar(b);
	}
	for (b = 'a' ; b <= 'f' ; b++)
	{
		putchar(b);
}
putchar('\n');
return (0);
}
