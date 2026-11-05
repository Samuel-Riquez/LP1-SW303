#include <stdio.h>

int main(){

    FILE *archivo;

    archivo = fopen("estudiantes.txt","w"); //w: el puntero está al inicio, w: write

    if(archivo == NULL){
        printf("Error al crear el archivo. \n");
        return 1;
    }

    fprintf(archivo, "Juan \n");
    fprintf(archivo, "Antonio \n");
    fprintf(archivo, "Dairon \n");

    fclose(archivo);

    printf("Archivo creado correctamente. \n");

    FILE *archivo2;
    int caracter;

    archivo2 = fopen("estudiantes.txt", "r");
    
    if(archivo2 == NULL){
        printf("El archivo no existe. \n");
        return 2;
    }

    while((caracter = fgetc(archivo2)) != EOF){
        putchar(caracter);
    }

    fclose(archivo2);

    return 0;
}