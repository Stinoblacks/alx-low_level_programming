#include <stdio.h>
/**
 *  main - print if the number is positive, negative or zero
 *
 *  Description: using the main function to show number type
 *  Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}

for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
