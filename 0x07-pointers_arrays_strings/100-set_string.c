#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: a pointer that points to a pointer
 * @to: a pointer that points to a char
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
