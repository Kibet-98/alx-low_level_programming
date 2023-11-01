#include <unistd.h>

/** _putchar - writes a character to the standard output(stdout)
 * @c:The character to be written
 * Return: On success, the character is returned. On error, -1 is returned.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
