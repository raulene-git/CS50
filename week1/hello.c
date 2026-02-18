#include <cs50.h>
#include <stdio.h>

int main(void)

{
    // Ask question, based on answer reply
    string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer);
}
