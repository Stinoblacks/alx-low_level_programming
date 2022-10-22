#include "main.h"
/**
 * _isdigit - checks for digits through 0 and 9
 * @c: inputs digits
 * Return: 1 or 0 if c is a digit from 0 to 9
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

