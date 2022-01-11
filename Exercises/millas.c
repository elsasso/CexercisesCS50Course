#include <stdio.h>
#include <cs50.h>

int calc(int n);

int main(void)
{
    int distancia = get_int("Ingrese la distancia a calcular: ");
    calc(distancia);

    printf("El tiempo sera de %i minutos\n", calc(distancia));
    
    
}
int calc(int n)
{
    float calculo1 = (n/40.0);
    int calculo = (calculo1*60);
    return calculo;
}



