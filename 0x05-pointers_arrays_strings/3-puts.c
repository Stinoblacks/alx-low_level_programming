#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: the string to be printed
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);

}
