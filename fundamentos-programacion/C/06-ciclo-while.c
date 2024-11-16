//* Clase Ciclo WHILE

/*
    /! En C los Booleanos solo se pueden utilizar mediante un librería.
    /! Se necesito #include <stdbool.h> para utilizarlos.

    seguir = true;
    while (seguir) { // Mientras la condición sea true, estaremos dentro del bucle
        if (condición) {
            seguir = false; // Debe cambiar a false para salir del bucle
        }
    }
*/

#include <stdio.h>
#include <stdbool.h>

int main() {

    int numero;
    bool seguir = true;
    printf("Introduce un numero (negativo para terminar): ");
    scanf("%d", &numero);

    while (seguir) {
        printf("El numero es: %d \n", numero);
        printf("Introduce otro numero (negativo para terminar): ");
        scanf("%d", &numero);

        if (numero < 0) {
            seguir = false;
        }
    }

    printf("Programa terminado");

    return 0;
}