#include "main.h"
/**
 * _strcpy - copy src string to dest string
 *
 * @dest: destination of the operation
 * @src: source string
 *
 */

char *_strcpy(char *dest, char *src) 
{
    size_t n;
    char *p = src;
    n = _strlen(src);
    for (; *p; n--)
    {
        *dest = *p;
        p++;
    }

    return (dest);
}