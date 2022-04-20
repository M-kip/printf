#include "main.h"

/**
 * ret_postion - return position after white space
 *
 * @s: string pointer
 * @i: integer sentinel
 *
 * Return: index 
 */
int ret_position(const char *s, int n)
{
    int i = 0;

    while(*s)
    {
        if (s[n + 1] != ' ')
        {
            return (i);
        }
        i++;
        n++;
    }
    return (i);
}