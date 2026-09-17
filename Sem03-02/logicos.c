#include <stdio.h>

int main(){
    int a = 5, b = 0;

    if(a){
        printf("a = %d es verdadero \n", a);
    }

    if(!b){
        printf("b = %d es falso, !b = %d \n", b, !b);
    }

    printf("5 > 3 =  %d \n", 5 > 3);
    printf("5 == 5  = %d \n", 5 == 5);

    int x = 0;
    if (b != 0 && a / b > 1) { // b!=0 es falso -> NO evalua a/b
     printf("No se ejecuta\n");
    } else {
    printf("Cortocircuito evito division por cero\n");
    }

    // Precedencia: && tiene mayor precedencia que ||
    int r = 1 || 0 && 0; // 1 || (0 && 0) = 1
    printf("1 || 0 && 0 = %d\n", r);


    printf("c version %ld \n", __STDC_VERSION__);
    printf("int: %zu bytes | long: %zu bytes | float: %zu | double: %zu\n",
    sizeof(int), sizeof(long), sizeof(float), sizeof(double));

    return 0;

}