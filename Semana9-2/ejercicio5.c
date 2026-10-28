#include <stdio.h>
int main(){
    int numero = 100;
    int *ptr = &numero;
    int **pptr = &ptr;

    printf("numero = %d, direccion = %p \n", numero, &numero);
    printf("*ptr = %d, direccion = %p \n", *ptr, ptr); //Indica la ireccion de numero
    printf("**pptr = %d, direccion = %p \n", **pptr, pptr); //Indica la direccion de la direccion de numero

    **pptr = 200;
    printf("Nuevo numero = %d \n", numero); //Ya no se indica puntero

    return 0;
}