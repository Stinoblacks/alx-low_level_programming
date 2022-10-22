#include "main.h"
/**
 * _isupper - check for upprecase letters
 * @c: inputs letters
 * Return: 1 or 0 if c is upper/lower case
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
