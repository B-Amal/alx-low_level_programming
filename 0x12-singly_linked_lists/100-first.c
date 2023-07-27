#include <stdio.h>

#define CONSTRUCTOR_ATTRIB __attribute__((constructor)) void

CONSTRUCTOR_ATTRIB first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

