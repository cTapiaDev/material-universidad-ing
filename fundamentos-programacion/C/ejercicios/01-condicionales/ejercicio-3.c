/* 
    Solicitar un número al usuario y determinar si es positivo, negativo o cero.
    Imprimir el resultado correspondiente.
*/

#include <stdio.h>

int main() {

    int numero;
    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("El numero %d es positivo", numero);
    } else if (numero < 0) {
        printf("El numero %d es negativo", numero);
    } else {
        printf("Es igual a %d", numero);
    }

    return 0;

}