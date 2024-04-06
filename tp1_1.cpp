#include <stdio.h>

int main(){
    int variable = 15, *puntero;
    puntero = &variable;

    printf("hola mundo\n");

    printf("Contenido del puntero: %d\n", *puntero);
    printf("Direccion de memoria almacenada por el puntero: %p\n", puntero);
    printf("Direccion de memoria de la variable: %p\n", &variable);
    printf("Direccion de memoria del puntero: %p\n", &puntero);
    printf("Tamanio de memoria utilizado por esa variable: %zu bytes\n", sizeof(variable));

    return 0;
}