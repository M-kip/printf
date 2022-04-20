#include "main.h"

/**
 * _strlen - return length of a string
 * @s: String pointer
 *
 * Returns: lenght of s
 */
size_t _strlen(const char *s)
{
    const char *p = s;
    while(*s)
    {
        s++;
    }
    
    return (s - p);
}