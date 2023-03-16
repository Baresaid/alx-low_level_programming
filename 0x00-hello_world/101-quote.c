#include <unistd.h>
/**
 * main - program that prints exactly
 * Return: always return (0)
 */

int main(void)
{

char *message = "and that piece of art is useful\"
- Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, message, 37);
return (1);
}
