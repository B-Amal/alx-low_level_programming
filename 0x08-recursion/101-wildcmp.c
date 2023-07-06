#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: pointer to a 1st string to be compared
 * @s2: pointer to a 2nd string to be compared
 * Return: 1 if strings are identical, 0 otherwise
 **/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
