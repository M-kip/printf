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

	while (n)
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
	if (n < 0)
	{
		return (n *= -1);
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
	int index = 0, sign;
	int n = va_arg(list, int);
	char *buffer;

	sign = n;
	buffer = malloc((numlen(n) + 1) * sizeof(char));

	if (buffer == NULL)
	{
		free(buffer);
		perror("Unable to create buffer");

		return (0);
	}
	if (sign < 0)
	{
		n = _abs(n);
	}
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
	reverse_str(buffer);

	return (buffer);
}
