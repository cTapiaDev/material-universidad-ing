//* Clase de Switch

/*
    switch(expresión) {
        case valor1:
            -- Código que se ejecutará si la expresión es igual a valor 1 --
            break;
        case valor2:
            -- Código que se ejecutará si la expresión es igual a valor 2 --
        case ... - Se pueden poner todos los que se requieran -
        default:
            -- Código que se ejecuta si es que ningún valor es igual a la expresión --
    }
*/

#include <stdio.h>

int main() {
    int opcion;

    printf("Seleccione una opción \n");
    printf("1. Imprimir Hola. \n");
    printf("2. Imprimir Adios. \n");
    printf("3. Imprimir Gracias. \n");
    printf("4. Imprimir Salir. \n");
    printf("Introduce una opcion: \n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1: 
            printf("Hola. \n");
            break;
        case 2:
            printf("Adios. \n");
            break;
        case 3:
            printf("Gracias. \n");
            break;
        case 4:
            printf("Salir. \n");
            break;
        default:
            printf("Opcion invalida");
            break;
    }

    return 0;
}