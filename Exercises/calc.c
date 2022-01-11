#include <stdio.h>
#include <cs50.h>

void formula(void);
int exponente(void);

int main(void)
{
    printf("Bienvenido a la calculadora prehistorica de potencias\n");
    formula();
}

void formula(void)
{
    int base = get_int("Ingrese numero para calcular: ");
    int potencia = exponente();
    
    if (potencia == 0)
    {
        printf("El resultado es: 1\n");
    }
    else
    {
    double z = base;
    int i = 1;
    while (i<potencia)
    {
        z = (z*base);
        i++;
    }
        
    printf("El resultado es: %.1f\n", z);
    }

}

int exponente(void)
{
    int potencia;
    do
    {
        potencia = get_int("Ingrese exponente: ");
    }
    while (potencia<0);
    return potencia;
}

