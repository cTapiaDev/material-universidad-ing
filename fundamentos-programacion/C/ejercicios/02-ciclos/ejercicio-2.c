/*
    Imprimir múltiplos de un número ingresado por el usuario hasta un limite
    (también ingresado por el usuario).
*/

#include <stdio.h>

int main() {

    int numero, limite;

    printf("Ingresa el numero que deseas imprimir: ");
    scanf("%d", &numero);

    printf("Ingresa el limite de multiplos que quieres mostrar: ");
    scanf("%d", &limite);

    for (int i = 1; i <= limite; i++) {
        printf("%d x %d = %d \n", numero, i, numero * i);
    }

    return 0;
}