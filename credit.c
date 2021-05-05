#include <cs50.h>
#include <stdio.h>

void cifras2(void);


int main(void)
{
    cifras2();

}

void cifras2(void)
{
    long numtarj = get_long("Numero: ");
    int suma1 = 0;
    long i = 10;
    while (i < numtarj)
    {
    int n = (numtarj /i % 10);
    i = (i * 100);
    int dig2 = n * 2;
    int dig22 = dig2 % 10;
    int dig222 = dig2 / 10;
    suma1 = suma1 + dig22 + dig222;

    }
    int suma2 = 0;
    long t = 1;
    while (t < numtarj)
    {
    int g = (numtarj /t % 10);
    t = (t * 100);
    suma2 = suma2 + g;


    }

    
    long num = numtarj;
    int cont = 0;
    while (num > 0)
    {
        num = num / 10;
        cont++;
    }
    if (cont == 13 || cont == 15 || cont == 16)
    {
        int sumat = suma1 + suma2;
        int check = sumat % 10;
        if (check == 0)
        {
            int amex = numtarj / 10000000000000;
            int master = numtarj / 100000000000000;
            long visa = numtarj;
            while (visa > 10)
            {
                visa = visa / 10;
            }
            if (visa == 4)
            {
                printf("VISA\n");
            }
            else if (master > 50 && master < 56)
            {
                printf("MASTERCARD\n");
            }
            else if (amex == 37)
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
        
    }
}
    
