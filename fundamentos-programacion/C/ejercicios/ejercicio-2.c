#include <stdio.h>

int main() {

    /*
        Pide al usuario el precio de un producto y calcula el precio con descuento si el precio es mayor a 100.
    */

    float precio, descuento;
    printf("Ingresa el precio del producto: ");
    scanf("%f", &precio);

    if (precio > 100) {
        descuento = precio * 0.10;
        precio = precio - descuento;
        printf("El precio con descuento es: %.2f \n", precio);
    } else {
        printf("No hay descuento. \n");
        printf("El precio es: %.2f \n", precio);
    }

    return 0;
}