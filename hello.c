#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Cual es tu nombre? ");
    printf ("Hola %s\n", name);
}