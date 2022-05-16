TASK 1

/*
 * File: 1-print_numbers.c
 * Auth: Tolulope Fakunle
 */

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list mynumbers;
	unsigned int myindex;

	va_start(mynumbers, n);

	for (myindex = 0; myindex < n; myindex++)
	{
		printf("%d", va_arg(mynumbers, int));

		if (myindex != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(mynumbers);
}
