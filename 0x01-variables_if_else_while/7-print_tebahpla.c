#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
        char letter;

        for (letter = 'z'; letter >= 'a'; letter--)
                putchar(letter);

        putchar('\n');
return (0);
}
