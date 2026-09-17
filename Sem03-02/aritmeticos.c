#include <stdio.h>

int main(){

    //Division entera y real
    int a = 7, b = 2;

    printf("DIVISION ENTERA: \n");
    printf("7 / 2 = %d \n", a / b);
    printf("7 %% 2 = %d \n", a % b);
    printf("DIVISION REAL: \n");
    printf("7 / 2 = %f \n", (float) a / b);

    //Modulo con negativos
    printf("RESTO 1: \n");
    printf("-7 %% 2 = %d \n", -7 % 2);
    printf("RESTO 2: \n");
    printf("7 %% -2 = %d \n", 7 % -2);

    //Asignación compuesta
    int x = 10;

    x +=5;
    printf(" x +=5: %d \n", x);
    x -=3;
    printf(" x -=3: %d \n", x);
    x *=2;
    printf(" x *=2: %d \n", x);
    x /=4;
    printf(" x /=4: %d  \n", x);
    x %=4 ;
    printf(" x %%=4: %d \n", x);

    return 0;
}