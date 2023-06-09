#include "main.h"

/**
 * _strlen_recursion - calculate the length of string
 * @s: string being be counted
 * Return: 0 for null else return function
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
