#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: lists of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list lists;
	char *str;
	char *separator = "";

	int i = 0;

	va_start(lists, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(lists, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(lists, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(lists, double));
					break;
				case 's':
					str = va_arg(lists, char *);

					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);

					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(lists);
}
