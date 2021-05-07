#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
                break;
            }
            
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    string key = argv[1];
    int k = atoi(key);
    
    string ptext = get_string("Plaintext:  ");
    
    printf("ciphertext: ");
    
    for (int j = 0, m = strlen(ptext); j < m; j++)
    {
        if (isalpha(ptext[j]))
        {
            if (islower(ptext[j]))
            {
                if (ptext[j] + (k % 26) > 122)
                {
                    printf("%c", ptext[j] + (k % 26) - 26);
                }
                else
                {
                    printf("%c", ptext[j] + k % 26);
                }
            }
            else 
            {
                if (ptext[j] + (k % 26) > 90)
                {
                    printf("%c", ptext[j] + (k % 26) - 26);
                }
                else
                {
                    printf("%c", ptext[j] + k % 26);
                }
            }

        }
        else
        {
            printf("%c", ptext[j]);
        }
    }
    printf("\n");
    return 0;
    
}

