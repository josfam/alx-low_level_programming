#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name to print.
 * @f: The callback function to use for printing the name.
 * Description: Prints a name, using the specified callback function.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

