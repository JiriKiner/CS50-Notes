// This program will encrypt the user's plaintext input to ciphertext using specified key (number)

// Included libraries
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// We need to specify the user's key in the command-line
int main(int argc, string argv[])
{
    // Ends the program with the error message if the user don't specify just one argument as a key
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Checks if each character of the given key is a digit, otherwise ends the program
    int length = strlen(argv[1]);
    for (int i = 0; i < length; i++)
    {
        if (isdigit(argv[1][i]) == false)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Changes the given argument to integer
    int k = atoi(argv[1]);

    // Prompts for a plaintext
    string pt = get_string("plaintext:  ");

    // Encrypts the plaintext by given key, excluding non-alphabet characters
    int ptlength = strlen(pt);
    char ct[ptlength];
    for (int i = 0; i < ptlength; i++)
    {
        if (isalpha(pt[i]))
        {
            ct[i] = (pt[i] + k);
        }
        else
        {
            ct[i] = pt[i];
        }
    }

    // Wraparound from Z to A
    for (int i = 0; i < ptlength; i++)
    {
        // For uppercase letters
        if (isupper(pt[i]))
        {
            if (ct[i] > 90)
            {
                printf("It is not ok (Capital).\n");
            }
        }
        // For lowercase letters
        else if (islower(pt[i]))
        {
            if (ct[i] > 122)
            {
                printf("It is not ok (Lower).\n");
            }
        }
    }
    // Prints encrypted ciphertext
    printf("ciphertext: %s\n", ct);
    return 0;
}