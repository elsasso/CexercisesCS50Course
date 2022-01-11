#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    string frase = get_string("Ingrese frase de 4 caracteres: ");
    if(strlen(frase) == 4)
    {
        printf("%s!\n", frase);
    }
    else
    {
        printf("%s?\n", frase);
    }
    
    printf("%c\n", frase[0]);
}