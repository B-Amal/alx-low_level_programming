#include "main.h"

int _check_palindrome(char *s, int i, int len);
int _strlen(char *s);


/**
 * is_palindrome - checks if a string is palindrome or not
 * @s: string to be checked
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_check_palindrome(s, 0, _strlen(s)));
}


/**
 * _strlen - computes the length of a string
 * @s: pointer to a string
 * Return: length as int
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}


/**
 * _check_palindrome - checks if characters satisfy the condtion
 * @s: string
 * @i: iterator
 * @len: length
 * Return: 1 or 0
 */
int _check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (_check_palindrome(s, i + 1, len - 1));
}
