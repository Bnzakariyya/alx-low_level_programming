#include <stdio.h>
#include <string.h>
void puts2(char *str)
{
	int length = strlen(str);
	int i, j;
	char temp;

	for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
