#include <stdio.h>
#include <cs50.h>
#include <math.h>

float positive(void);

int main(void)
{
    float dollars = positive();
    int cents = round(dollars * 100);

    int c25, c10, c5, c1;
    c25 = 25;
    c10 = 10;
    c5 = 5;
    c1 = 1;
    
    int i, r;
    i = 0;
    r = cents;
    while (r >= c25)
    {
        r = (r - c25);
        i++;
    }
    
    while (r >= c10)
    {
        r = (r - c10);
        i++;
    }
    while (r >= c5)
    {
        r = (r - c5);
        i++;
    }
    while (r >= c1)
    {
        r = (r - c1);
        i++;
    }
    printf("%i\n", i);

}

float positive(void)
{
    float z;
    do
    {
        z = get_float("Change Owed: ");
    }
    while (z < 0);
    return z;
}