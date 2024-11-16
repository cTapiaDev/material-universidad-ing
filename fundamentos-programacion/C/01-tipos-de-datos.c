#include <stdio.h>

int main() {

    /*** Números Enteros ***/
    int entero = 5;
    printf("El numero entero es: %d \n\n", entero);

    /*** Números Flotantes ***/
    float flotante = 7.8;
    printf("El numero float es: %f \n", flotante);
    printf("El numero flotante con 2 decimales es: %.2f \n\n", flotante);

    /*** Números Dobles ***/
    double numero = 5.5;
    printf("El numero double es: %lf \n", numero);
    printf("El numero double con 2 decimales es: %.2lf \n\n", numero);

    /*** Carácter ***/
    char letra = 'A';
    printf("El caracter es: %c \n\n", letra);

    /*** String/Cadena ***/
    char cadena[10] = "Hola Mundo";
    printf("La cadena es: %s \n\n", cadena);

    
    return 0;
}