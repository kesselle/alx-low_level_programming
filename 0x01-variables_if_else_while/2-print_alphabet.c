#include <stdio.h>

int main(void)
{
    char letter = 'a'; // start with the letter 'a'

    while (letter <= 'z') // loop while the letter is less than or equal to 'z'
    {
        putchar(letter); // print the current letter
        letter++; // move to the next letter
    }

    putchar('\n'); // print a newline character to move to the next line

    return 0;
}
