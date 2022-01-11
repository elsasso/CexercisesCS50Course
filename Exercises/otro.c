#include <stdio.h>
#include <cs50.h>

void print(int n);

int main(void)
{   int a = get_int("Cuantos saludos quiere? ");
    print(a);
    string var = "Frase";
    printf("Hola %s", var);
}

void print(int n)
{
    for (int i=0; i<n; i++)
    {
    printf("Hola amigo\n");
    }
}