#include <stdio.h>

size_t _strlen(const char *str)
{
	int length = 0;
	while (*str++);
	length++;
	return(length);
}
