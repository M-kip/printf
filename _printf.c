#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * create_buffer - create a buffer using malloc
 * @size: int
 *
 * Description: create a buffer using malloc call
 * the buffer char type
 * Return: pointer to a buffer
 */
char *create_buffer(int size)
{
	int k;

	char *buf = malloc(size * sizeof(char));

	if (buf == NULL)
	{
		free(buf);
		perror("unable to create buffer");
		return (0);
	}
	for (k = 0 ; k <= 1024; k++)
	{
		buf[k] = '\0';
	}

	return (buf);
}
/**
 * print_helper - create a new string
 * @format: string format
 * @buf: new string buffer
 * @flags: flags_t
 * @list: va_list
 *
 * this functions supplements the _printf
 * function by iterating through format
 * add adding the passed arguments
 *
 * Return: int
 */
int print_helper(const char *format, char *buf, flags_t *flags, va_list list)
{
	int i, j, b_len = 0;
	char *s;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
			continue;
		else if (format[i] == '%')
		{
			if (format[i + 1] == ' ')
				i += ret_position(format, i);
			for (j = 0; flags[j].f != NULL; j++)
			{
				if (format[i + 1] == *(flags[j].c))
				{
					s = flags[j].f(list);
					if (s == NULL)
						return (-1);
					b_len += _strlen(s);
					_strcat(buf, s, b_len);
					i++;
					break;
				}
			}
			if (flags[j].f == NULL)
				buf[b_len++] = format[i];
		}
		else
			buf[b_len++] = format[i];
	}
	buf[b_len] = '\0';
	write(1, buf, b_len);
	free(buf);

	return (b_len - 1);
}
/**
 * _printf - Custom printf
 * @format: string pointer
 *
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	char *buf;
	int b_len = 0;
	va_list list;
	flags_t flags[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_i},
		{"b", print_b},
		{"u", print_u},
		{"X", print_hex},
		{"x", print_hex_low},
		{"o", print_oct},
		{"R", rot13},
		{NULL, NULL},
		};

	buf = create_buffer(1024);
	va_start(list, format);
	if (format == NULL)
		return (-1);
	b_len = print_helper(format, buf, flags, list);
	va_end(list);
	return (b_len);
}
