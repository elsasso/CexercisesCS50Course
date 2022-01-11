#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int collatz(int n);

int main(void)
{
    int number = get_int("Ingrese numero: ");
    int value = collatz(number);
    printf ("%i\n", value);
}


int collatz(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if ((n % 2) == 0)
    {
        return 1 + collatz(n / 2);
    }
    else
    {
        return 1 + collatz(3 * n + 1);
    }
}