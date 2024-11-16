/*
    Imprimir números del 0 al 30, avanzando de 3 en 3.
*/

#include <stdio.h>

int main() {

    for (int i = 0; i <= 30;) {
        printf("%d \n", i);
        i += 3;
    }

    return 0;
}