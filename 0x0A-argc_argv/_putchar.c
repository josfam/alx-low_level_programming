#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to standard out.
 * @ch: The character to write to standard out.
 * Description: Implementation of _putchar() that uses write() for printing.
 * Return: Nothing
 */
void _putchar(char ch)
{
	write(1, &ch, sizeof(char));
}

