#include <stdlib.h>
#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: Size to copy prevent buffer overflow
 *
 * Return: new string
 */
char *_strcat(char *dest, char *src, int n)
{
	int i = 0;
	char *p = dest;

	while (*p)
		p++;
	while (i <= n)
	{
		*p++ = *src++;
		i++;
	}
	*p = '\0';

	return (p);
}
