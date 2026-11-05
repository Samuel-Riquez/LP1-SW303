#include <stdio.h>

int main(){

    FILE *archivo;

    archivo = fopen("estudiantes.txt", "a"); //a: el puntero esta al final
    
    if(archivo == NULL){
        printf("El archivo no existe. \n");
        return 1;
    }

    fprintf(archivo, "Dennis \n");
    fprintf(archivo, "Victor \n");

    fclose(archivo);

    printf("Datos agregados correctamente!! \n");

    //Mostrar el archivo
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