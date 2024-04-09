#include <stdio.h>

int cuadradoNum(int num);
void cuadradoNumVoid(int *num);
void muestraVariable(int variable);
void Invertir(int *a, int *b);
void orden(int *a, int *b);

int main(){
    int num = 5, cuadrado, variable, a, b, num1, num2;
    
    printf("---Apartado A---\n");
    printf("Cuadrado de un num (5): %d\n", cuadradoNum(num));

    printf("\n---Apartado B---\n");
    cuadradoNumVoid(&num);

    printf("\n---Apartado C---\n");
    printf("Ingrese la variable: ");
    scanf("%d", &variable);
    muestraVariable(variable);

    printf("\n---Apartado D---\n");
    printf("Ingrese el primer numero entero(a): ");
    scanf("%d", &a);
    printf("\nIngrese el segundo numero entero(b): ");
    scanf("%d", &b);
    printf("\nInviertiendo numeros...\n");
    Invertir(&a, &b);

    printf("\n---Apartado E---\n");
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("\nIngrese el segundo numero: ");
    scanf("%d", &num2);
    printf("\nOrdenando numeros...\n");
    orden(&num1, &num2);

    return 0;
}

int cuadradoNum(int num){
    int cuadrado;
    cuadrado = num * num;
    return cuadrado;
}

void cuadradoNumVoid(int *num){
    *num = (*num) * (*num);
    printf("Cuadrado de un num (5): %d\n", *num);
}



void muestraVariable(int variable){
    printf("Contenido de la variable: %d\n", variable);
    printf("Direccion de memoria de la variable: %p\n", &variable);
}

void Invertir(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b= aux;

    printf("Valor de b en la variable a: %d\n",*a);
    printf("Valor de a en la variable b: %d\n", *b);
}

void orden(int *a, int *b){
    int menor;
    if (*a>*b)
    {
        menor = *b;
        *b= *a;
        *a= menor;
    }

    printf("El primer numero es (el menor): %d\n", *a);
    printf("El segundo numero es (el mayor): %d\n", *b);
}