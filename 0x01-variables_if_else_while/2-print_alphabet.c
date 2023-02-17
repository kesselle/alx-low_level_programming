#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a'; /* start with the letter 'a' */
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
