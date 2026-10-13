#include <stdio.h>

void cubicreference(int *nPtr){

    *nPtr = *nPtr * *nPtr * *nPtr;

}


int main(){
    int number;
    printf("Ingrese un numero entero: ");
    scanf("%d", &number);

    cubicreference(&number);
    printf("\n");
    printf("El nuevo valor de number es: %d", number);

    return 0;
}