#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c - The character to  print
 * 
 * Return - 1 0c success.
 * On error - Return -1 and errno is set approximately.
*/

int _putchar(char c)
{
    return (write(1, &c, 1));
}
