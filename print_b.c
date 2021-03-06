#include "main.h"

/**
 * reverse_str -  reverses a string
 * @s: string
 *
 * Description: Reverse a string
 *
 * Return: str pointer
 */
char *reverse_str(char *s)
{
	char temp;
	int x, i; /* y */

	x = _strlen(s) - 1;
	/*y = _strlen(s) / 2;*/

	if (s == NULL)
	{
		return (0);
	}
	for (i = 0; i <= x; i++, x--)
	{
		temp = s[i];
		s[i] = s[x];
		s[x] = temp;
	}

	return (s);
}
/**
 * print_b - print binary
 * @list: va_list variable
 *
 * Description: convert integer to it's binary rep
 * Return: pointer to a binary string
 */
char *print_b(va_list list)
{
	char s[1024];
	char *ptr;
	int i = 0;
	unsigned int n = va_arg(list, unsigned int);

	ptr = s;
	if (n == 0)
	{
		s[++i] = '0';
	}

	while (n != 0)
	{
		s[i++] = n % 2 + '0';
		n /= 2;
	}
	s[i] = '\0';
	reverse_str(s);

	return (ptr);
}
