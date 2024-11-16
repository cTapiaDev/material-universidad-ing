//* Clase Ciclo FOR

/*
    for -> Se utiliza para repetir un bloque de código un número específico de veces.

    for (inicialización; condición; incremento) {
        -- Bloque de código --
    }
*/

#include <stdio.h>

int main() {
    // Bucle for para imprimir números del 1 al 10

    for (int i = 0; i <= 10; i++) {
        printf("%d \n", i);
    }

    for (int i = 10; i >= 1; i--) {
        printf("%d \n", i);
    }

    int suma = 0;
    for(int i = 0; i <= 10; i++) {
        suma += i;
        printf("%d \n", suma);
    }

    return 0;

}