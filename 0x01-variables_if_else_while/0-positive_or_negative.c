cd low - level_programming
mkdid 0x01 - variables_if_else_while
cd 0x01 - variables_if_else_while
vi README.md
project
0x01.c - variables, if, else, while
esc capital letter ZZ
vi 0 - positive_negative.c
copy script and paste
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Determines if a number is positive, negative or zero.
*
*Return: Always 0
*/
int main(void)
{
	int n:

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
