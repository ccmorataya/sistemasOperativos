#include <stdio.h>
#include <stdlib.h>

#include "libreria.h"

int main()
{
    float a, b;
    scanf("%f", &a);
    scanf("%f", &b);
    printf("%s\n", getNames());
    printf("%f\n", adition(a,b));
    printf("%f\n", subtraction(a,b));
    printf("%f\n", multiplication(a,b));
    printf("%f\n", division(a,b));
    return 0;
}