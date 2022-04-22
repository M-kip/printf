#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - Custom printf
 * @format: string pointer
 *
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	char *buf, *s;
	int i, j, k, b_len = 0;
	va_list list;
	struct print_flags flags[] = {
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

	buf = malloc(1024 * sizeof(char));
	if (buf == NULL)
	{
		free(buf);
		perror("unable to create buffer");
		return (-1);
	}
	for (k = 0 ; k <= 1024; k++)
	{
		buf[k] = '\0';
	}
	va_start(list, format);
	if (format == NULL)
	{
		perror("format string or variadic list error");
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			continue;
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == ' ')
			{
				i += ret_position(format, i);
			}
			for (j = 0; flags[j].f != NULL; j++)
			{
				if (format[i + 1] == *(flags[j].c))
				{
					s = flags[j].f(list);
					if (s == NULL)
					{
						return (-1);
					}
					b_len += _strlen(s);
					_strcat(buf, s, b_len);
					i++;
					break;
				}
			}
			if (flags[j].f == NULL)
			{
				buf[b_len++] = format[i];
			}
		}
		else
		{
			buf[b_len++] = format[i];
		}
	}
	buf[b_len] = '\0';
	write(1, buf, b_len);
	free(buf);
	va_end(list);
	return (b_len);
}
