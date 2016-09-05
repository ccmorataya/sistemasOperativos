#include <stdio.h>
#include <stdlib.h>

#include "libreria.h"

int main()
{
    float a, b;
    printf("Calculadora basica:\npara confirmar los datos utiliza [Enter]\nIngresa el primer numero a calcular\n");
    scanf("%f", &a);
    printf("Ingresa el segundo numero a calcular\n");
    scanf("%f", &b);
    printf("\nNombres de los integrantes:\n%s\n\n", getNames());
    printf("Resultado de la suma: %f\n", adition(a,b));
    printf("Resultado de la resta: %f\n", subtraction(a,b));
    printf("Resultado de la multiplicación: %f\n", multiplication(a,b));
    printf("Resultado de la división: %f\n\n", division(a,b));
    return 0;
}
