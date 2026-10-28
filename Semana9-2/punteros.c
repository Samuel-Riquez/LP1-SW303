#include <stdio.h>

int main(){

    int a = 25;
    int *aPtr = &a;
    //aPtr: Contiene la direccion de 'a'
    //*aPtr: Accede al valor de a

    printf("valor de a: %d \n", a);
    printf("Direccion de memoria de a: %p \n", &a); //Direccion de memoria
    printf("Acceso del valor de a: %d \n", *aPtr);
    printf("%p \n", *aPtr);
    printf("%d \n", aPtr);
    printf("%p \n", aPtr);

    //cambuar el valor:
    *aPtr = 40;
    printf("Nuevo valor de a: %d", *aPtr);


    return 0;
}