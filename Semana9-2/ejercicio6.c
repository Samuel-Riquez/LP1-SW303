/*
char arreglo_unidimensional[] = {}; //Vector
char arreglo_bidimensional[3][2] = {}; //Matriz de 3 filas y 2 columnas
*/

#include <stdio.h>

int main(void) {
    int matriz[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };
    
    int (*ptr)[3] = matriz; // (*ptr)[3] es arreglo de 3 punteros, apuntando a la matriz

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(ptr + i) + j)); // aritmetca de punteros
        }
        printf("\n");
    }
    return 0;
}


