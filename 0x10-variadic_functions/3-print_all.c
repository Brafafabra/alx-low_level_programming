#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character.
 * @valist: The va_list that contains the argument to print.
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_integer - Prints an integer.
 * @valist: The va_list that contains the argument to print.
 */
void print_integer(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_float - Prints a float.
 * @valist: The va_list that contains the argument to print.
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - Prints a string.
 * @valist: The va_list that contains the argument to print.
 */
void print_string(va_list valist)
{
	char *str = va_arg(valist, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Prints anything based on the format provided.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *sep = "";

	print_func_t print_func[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (print_func[j].func != NULL)
		{
			if (format[i] == print_func[j].type)
			{
				printf("%s", sep);
				print_func[j].func(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
