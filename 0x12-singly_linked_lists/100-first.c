#include <stdio.h>

/**
 * print_first - Apply the constructor attribute to print_first
 *		to execute before main().
 */
void print_first(void) __attribute__((constructor));

/**
 * print_first - Prints a sentence before the main
 *          function is executed
 */
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
