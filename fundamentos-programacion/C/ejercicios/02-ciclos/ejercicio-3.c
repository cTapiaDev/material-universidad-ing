/*
    Crear un programa que permita al usuario gestionar una lista de números.
    El programa debe ser capaz de las siguientes operaciones: 

    1.- Agregar un número a la lista.
    2.- Eliminar un número de la lista.
    3.- Buscar un número en la lista.
    4.- Mostrar todos los números de la lista.
    5.- Salir del programa. 
*/

#include <stdio.h>
#include <stdbool.h>

int main() {

    int opcion, numero, eliminar, buscar, largo = 0;
    bool encontrado = false;
    int lista[100];

    do {
        printf("\n");
        printf("---Lista de Opciones--- \n");
        printf("1.- Agregar un numero a la lista. \n");
        printf("2.- Eliminar un numero de la lista. \n");
        printf("3.- Buscar un numero en la lista. \n");
        printf("4.- Mostrar todos los numeros de la lista. \n");
        printf("5.- Salir del programa. \n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                largo += 1;
                printf("Ingresa un nuevo numero: ");
                scanf("%d", &numero);
                lista[largo] = numero;
                printf("Numero ingresado con exito \n");
                break;
            case 2:
                if (largo > 0) {
                    printf("Lista: \n");
                    for (int i = 1; i <= largo; i++) {
                        printf("%d \n", lista[i]);
                    }
                    printf("Ingresa el numero que quieres eliminar: ");
                    scanf("%d", &eliminar);

                    for (int i = 1; i <= largo; i++) {
                        if (lista[i] == eliminar) {
                            lista[i] = 0;
                            printf("Numero eliminado con exito. \n");
                        }
                    }
                } else {
                    printf("La lista no tiene datos");
                }
                break;
            case 3:
                if (largo > 0) {
                    printf("Ingresa el numero que quieras buscar: ");
                    scanf("%d", &buscar);

                    for (int i = 1; i <= largo; i++) {
                        if (lista[i] == buscar) {
                            printf("Numero %d encontrado en el indice %d \n", buscar, i);
                            encontrado = true;
                        }
                    }
                } else {
                    printf("La lista no tiene datos");
                }

                if (!encontrado) {
                    printf("El numero no existe en la lista. \n");
                }

                break;
            case 4:
                if (largo > 0) {
                    printf("Lista: \n");
                    for (int i = 1; i <= largo; i++) {
                        printf("%d \n", lista[i]);
                    }
                } else {
                    printf("La lista no tiene datos");
                }
                break;
            case 5:
                printf("Programa terminado.");
                break;
            default:
                printf("Selecciona una opcion valida");
                break;
        }

    } while (opcion != 5);


    return 0;
}