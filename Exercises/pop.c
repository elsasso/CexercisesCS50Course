#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    int ci;
    do
    {
        ci = get_int("Start size: ");
    }
    while (ci < 9);
    
    int cf;
    do
    {
        cf = get_int("End Size: ");
    }
    while (cf <= ci);
    
    int i = 0;
    int pop;
    while (ci < cf)
    {
        pop = ci + ci / 3 - ci / 4;
        ci = pop;
        i++;
    }

    printf("popul: %i - tiempo: %i\n", pop, i);

}