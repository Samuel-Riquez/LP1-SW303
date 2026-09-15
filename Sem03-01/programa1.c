#include <stdio.h>

int main(void){
    printf("Welcome to C! \n");

    printf("Welcome ");
    printf("to C! \n");

    int num1;
    int num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("La suma es: %d + %d = %d ", num1, num2, num1 + num2 );
}