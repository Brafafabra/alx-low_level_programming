#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct print_func - Struct for printing functions
 * @type: The type of argument
 * @func: The corresponding printing function
 */
typedef struct print_func
{
	char type;
	void (*func)(va_list);
} print_func_t;

int sum_them_all(const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

#endif /* VARIADIC_FUNCTIONS_H */
