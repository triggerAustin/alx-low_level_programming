#include <unistd.h>

/**
 * _putchar: Prints characters
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
