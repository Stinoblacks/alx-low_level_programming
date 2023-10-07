#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Description: This program prints alpabets in lower case
 * except the letters 'e' and 'q'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')

		{
			putchar(ch);
		}
	}
	putchar('\n'); /* Prints a new line after printing the alphabet */

	return (0);
}
