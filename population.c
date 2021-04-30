#include <stdio.h>
#include <cs50.h>

int mayoranueve(void);
int calculo(void);

int main(void)
{
    printf("Population Growth, Welcome!\n");

    int ci = mayoranueve();
    int cf = get_int("End Size: ");

    if (cf < ci)
    {
        printf("Error, the End Size must be bigger than the Start Size\n");
    }
    else
    {
        int z = ci;
        int i = 0;
        while (z < cf)
        {
            z = (z + z / 3 - z / 4);
            i++;
        }

        printf("It will take %i years to reach %i total population\n", i, cf);
        char o = get_char("Do you wish to know how population grows year to year? (Y/N): ");

        if (o == 'Y' || o == 'y')
        {
            int t = ci;
            int b = 1;
            while (t < cf)
            {
                t = (t + t / 3 - t / 4);
                printf("Year %i - %i\n", b, t);
                b++;
            }
            printf("Hasta Luego, chau!!\n");
        }
        else if (o == 'N' || o == 'n')
        {
            printf("Hasta Luego, chau!!\n");
        }
    }

}

int mayoranueve(void)
{
    int n;
    do
    {
        n = get_int("Start size:  ");
    }
    while (n < 9);
    return n;
}


