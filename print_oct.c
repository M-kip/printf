#include "main.h"
/**
 * print_oct - convert an oct from decimal
 * @list: va_list list
 *
 * Return: string pointer
 */

char *print_oct(va_list list)
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
		/*printf("erroneous return\n");*/
		return (buffer);
	}

	while (n)
	{
		buffer[index++] = ((n % 8) + '0');
		n /= 8;
	}

	buffer[index] = '\0';
	reverse_str(buffer);
	return (buffer);

}
