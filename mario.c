#include <cs50.h>
#include <stdio.h>

int bloques(void);

int main(void)
{
    int bloq = bloques();

    for (int i = 0; i < bloq; i++)
    {
        for (int h = 0; h < (bloq - i - 1); h++)
        {
            printf(" ");

        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");

        }
        printf("  ");

        for (int j = 0; j <= i; j++)
        {
            printf("#");

        }
        printf("\n");
    }


}

int bloques(void)
{
    int z;
    do
    {
        z = get_int("Ingrese cantidad de bloques (1-8): ");
    }
    while (z < 1 || z > 8);
    return z;
}