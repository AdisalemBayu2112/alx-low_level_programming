#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings.
 * @dest: what we are apprending to
 * @src: the string we are appending from
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *begin = dest;

	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
return (begin);
}
