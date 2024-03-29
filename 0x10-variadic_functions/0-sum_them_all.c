#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: Number of paramters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vars;
	unsigned int i, sum = 0;

	va_start(vars, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vars, int);

	va_end(vars);
	return (sum);
}
