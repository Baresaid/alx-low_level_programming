#include <stdio.h>
#include <time.h>
#include i<stdlib.h>
/**
 * main -main block
 * Description: Get a random it with 5
 * Return: 0
 */

int main(void)

{
        char low, e, q,;

        e = 'e';
        q = 'q';

        for (low = 'a'; low <= 'z'; low++)
        {
        if (low != 'e' && low != 'q')
        putchar(low);
        }
        putchar('\n');
        return (0);
}
