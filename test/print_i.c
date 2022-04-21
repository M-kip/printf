#include "main.h"
/**
 * numlen find the lenght of a number
 * @n: int number
 *
 * Finds the lenght of a number
 * Return the lenght of a number
 */
int numlen(int n)
{
    int i = 0;

    while(n)
    {
        n /= 10;
        i++;
    }

    return (i);
}
/**
 * _abs absolute of a number
 * @n: int number
 *
 * find the absolute value of a number
 * Return absolute of a number
 */
int _abs(int n)
{
    if ( n < 0)
    {
        return (n *= -n);
    }

    return (n);
}
/**
 * print_i prints integer
 * @list: list va_list
 *
 * converts integer to string
 * return a string integer
 */
char *print_i(va_list list)
{
    int index = 0, sign = 0;
    int n = va_arg(list, int);
    char *buffer;

    buffer = malloc((numlen(n) + 1) * sizeof(char));

    if (buffer == NULL)
    {
        free(buffer);
        perror("Unable to create buffer");

        return (0);
    }

    /*
    if (n < -10 && n < 10 )
    {
        buffer[index++] = _abs(n) + '0';
        buffer[index] = '\0';
        printf("buffer contents %s\n", buffer);

        return (buffer);
    }*/

    if ((sign = n) < 0 )
    {
        n = _abs(n);
    }
    printf("integer value before sign coversation %i\n", n);
    while (n)
    {
        buffer[index++] = n % 10 + '0';
        n /= 10;
    }
    if (sign < 0)
    {
        buffer[index++] = '-';  
    }
    buffer[index] = '\0';
    printf("buffer contents %s\n", buffer);
    reverse_str(buffer);

    return (buffer);
}