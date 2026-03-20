#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototype
bool only_digits(string s);

int main(int argc, string argv[])
{
    // Check argument count
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Validate key is numeric
    if (!only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Convert key
    int k = atoi(argv[1]);
    k = k % 26;

    // Plaintext
    string text = get_string("plaintext: ");

    // Encrypt
    printf("ciphertext: ");

    for (int i = 0; i < strlen(text); i++)
    {
        if (isupper(text[i]))
        {
            printf("%c", ((text[i] - 'A' + k) % 26) + 'A');
        }
        else if (islower(text[i]))
        {
            printf("%c", ((text[i] - 'a' + k) % 26) + 'a');
        }
        else
        {
            printf("%c", text[i]);
        }
    }

    printf("\n");
    return 0;
}

// Function to check digits
bool only_digits(string s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}
