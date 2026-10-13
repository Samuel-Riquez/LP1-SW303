/* Gestion de matrices */

#include <stdio.h>
#define MAX_FIL 4
#define MAX_COL 4

//Poner todos sus valores en 0
void ini_matriz(int matriz[MAX_FIL][MAX_COL]){

    for(size_t i = 0; i < MAX_FIL; i++){
        for(size_t j = 0; j < MAX_COL; j++){
            matriz[i][j] = 0;
        }

    }

}

//Mostrar la matriz
void mostrar_matriz(int matriz[MAX_FIL][MAX_COL]){
    for(size_t i = 0; i < MAX_FIL; i++){
        for(size_t j = 0; j < MAX_COL; j++){
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int mat1[MAX_FIL][MAX_COL]; //Se crea la matriz
    int mat2[MAX_FIL][MAX_COL] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};

    //mat1
    printf("mat1: \n");
    ini_matriz(mat1);
    mostrar_matriz(mat1);

    //mat2
    printf("mat2: \n");
    mostrar_matriz(mat2);
    
    ini_matriz(mat2);
    mostrar_matriz(mat2);

    return 0;
}