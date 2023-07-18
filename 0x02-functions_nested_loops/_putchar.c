#include <unistd.h>
#include "main.h"

/**
 *
 * _putchar - wriets the character c to stdout
 * @c: the character to print 
 *
 * Return: on sucsess 1.
 * on error,
 * -1 is retrned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1,, &c, 1));
}
