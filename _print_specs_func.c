#include "main.h"
/**
 * _print_c - print character
 * @list: va_list variable
 *
 * description: formats data type to character
 * Return: string
 */
char *print_c(va_list list)
{
    static char s[] = {0, '\0'};

    *s = va_arg(list, int);
    if (*s == '\0')
    {
        return (" ");
    }

    return (s);
}
/**
 * _print_s - print string
 * @list: va_list list 
 *
 * description: formats data to string type
 * Return: string pointer
 */
char *print_s(va_list list)
{
    char *s;

    s = va_arg(list, char *);
    if (s == NULL)
    {
        return (s = "(null)");
    }

    return (s);
}
