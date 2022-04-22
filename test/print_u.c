#include "main.h"
/**
 * print_u print unsigned number
 * @list: va_list list
 *
 * convert an integer to a string rep
 * returns a string pointer
 */

char *print_u(va_list list)
{
	int index = 0, i = 0;
	unsigned int n = va_arg(list, unsigned int);
	char *buffer = malloc((numlen(n) + 1) * sizeof(char));

	if (buffer == NULL)
	{
		free(buffer);
		perror("unable to create buffer");

		return (0);
	}

	if (n < 10)
	{
		buffer[index++] = n + '0';
		buffer[i++] = '\0';

		return (buffer);
	}

	while (n)
	{
		buffer[index++] = n % 10 + '0';
		n /= 10;
	}

	buffer[index] = '\0';
	reverse_str(buffer);

	return (buffer);

}
