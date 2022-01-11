#include <stdio.h>
#include <cs50.h>

int potencia(void);

int main(void)
{
    printf("Bienvenido a la calculadora prehistorica\n");
    printf("El resultado es: %i\n", potencia());
}

int potencia(void)
{
    int entrada = get_int("Ingrese numero para calcular: ");
    int resultado = (entrada * entrada);
    return resultado;
}

