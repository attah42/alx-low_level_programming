#include <stdio.h>
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
int main(void)
{
	int  letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
putchar('\n');
}
