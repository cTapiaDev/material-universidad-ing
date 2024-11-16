#include <stdio.h>

int main() {

    /* 
        scanf -> nos permite capturar datos del usuario y guardarlos en una variable.
        scanf("formato", &variable)
        formato -> especifica el tipo de dato que esperamos que ingrese el usuario.
        %d -> enteros (int)
        %f -> decimales (float)
        %c -> carácter (char)
        %s -> cadena de texto (char[100])
        &variable -> el símbolo "&" indica la dirección de la variable donde se guardará el dato ingresado.
    */

    int numero;
    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);
    printf("El numero ingresado es: %d \n", numero);

    return 0;

}