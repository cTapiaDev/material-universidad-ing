#include <stdio.h>

int main() {

    /*
        Nos ayudan a tomar decisiones en el programa. 
    */

    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("El numero es positivo \n");
    } else if (numero < 0) {
        printf("El numero es negativo \n");
    } else {
        printf("El numero es 0 \n");
    }

    return 0;
}