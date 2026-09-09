#include <stdio.h>
int main(){

    float num1, num2;

    printf("CALCULADORA BASICA: \n");
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    printf("%.2f + %.2f = %.2f \n", num1, num2, num1 + num2);
    printf("%.2f - %.2f = %.2f \n", num1, num2, num1 - num2);
    printf("%.2f * %.2f = %.2f \n", num1, num2, num1 * num2);
    printf("%.2f / %.2f = %.2f \n", num1, num2, num1 / num2);

    int x = num1;

    printf("OPERACIONES BASICAS: \n");
    printf("x = %d \n", x);
    printf("x++ = %d \n", x++);
    printf("Despues de x++: x = %d \n", x);
    printf("++x = %d \n", ++x);

    return 0;
}
