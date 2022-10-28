<<<<<<< HEAD
#include "main.h"
/**
* print_alphabet - function to print abc
*
* Return: 0
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
=======
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
>>>>>>> ab0a5d86432bc1f3f2f7c5e8b8a256e745e580c0
}
