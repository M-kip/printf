#include "main.h"
/**
 * print_hex_low hexadecimal from an integer
 * @list: va_list list
 *
 * Takes an integer and return a hexadecimal string
 * returns a string pointer
 */
char *print_hex_low(va_list list)
{
    int index = 0;
    unsigned int n = va_arg(list, unsigned int);
    char *buffer = malloc((numlen(n) + 1) * sizeof(char));

    if (buffer == NULL)
    {
        free(buffer);
        perror("Unable to create buffer");
        
        return (0);
    }

    if (n == 0)
    {
        buffer[index++] = '0';
        buffer[index] = '\0';

        return (buffer);
    }

    while(n)
    {
        if ((n % 16 ) < 10)
        {
        buffer[index++] = n % 16 + '0';
        }
        else
        {
            buffer[index++] = n % 16 + 'a';
        }
        n /= 16;
    }

    buffer[index] = '\0';
    reverse_str(buffer);

    return (buffer);
}