#include "main.h"
/**
 * rot13 - encrypt string to rot13
 * @list: va_list list
 *
 * Return: rot13 encoded string
 */

char *rot13(va_list list)
{
	char alpha[] = " ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzq";
	char rot13[] = " NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int j = 0, k = 0;
	char *str = va_arg(list, char *);
	char *buffer = malloc((_strlen(str) + 1) * sizeof(char));

	if (buffer == NULL)
	{
		free(buffer);
		perror("Unable to create buffer");

		return (0);
	}

	while (str[j] != '\0')
	{
		for (; alpha[k] != '\0'; k++)
		{
			if (str[j] == alpha[k])
				buffer[j] = rot13[k];
		}
		j++;
	}

	buffer[j] = '\0';

	return (buffer);
}
