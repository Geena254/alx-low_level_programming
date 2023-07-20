#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 * @format: A list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int j = 0;
	char *stri, *sep = "";

	va_list lst;

	va_start(lst, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sep, va_arg(lst, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(lst, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(lst, double));
					break;
				case 's':
					stri = va_arg(lst, char *);
					if (!stri)
						stri = "(nil)";
					printf("%s%s", sep, stri);
					break;
				default:
					j++;
					continue;
			}
			sep = ", ";
			j++;
		}
	}

	printf("\n");
	va_end(lst);
}
