#include <stdio.h>

int main() {

    /*
        Pedir al usuario un número y verificar si es par o impar.
    */

    int numero;
    printf("Ingresa un numero entero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("El numero es par \n");
    } else {
        printf("El numero es impar \n");
    }



    return 0;
}
