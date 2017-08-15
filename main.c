#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entero;
    float flotante;
    char caracter;

    printf("Ingrese un entero\n");
    scanf("%d", &entero);
    printf("Ingrese un valor flotante\n");
    scanf("%f", &flotante);
    printf("Ingrese una letra\n");
    caracter = getche();

    printf("El dato es: %d\nEl flotante es: %.2f\nEl caracter es: %c", entero, flotante, caracter);
}
