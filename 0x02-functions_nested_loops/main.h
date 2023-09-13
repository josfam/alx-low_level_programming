#include <unistd.h>

/* prints a char to the screen*/
void _putchar(char ch)
{
	write(1, &ch, sizeof(char));
}
