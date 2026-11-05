//Lectura caracter por caracter
#include <stdio.h>

int main(){

    FILE *archivo;
    int caracter; //se utiliza int por el fgetc 
 
    archivo = fopen("datos.txt", "r");
 
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }
 
    while ((caracter = fgetc(archivo)) != EOF) { // fgetc() sirve para leer un caracter del archivo y el caracter =, guarda el caracter
        putchar(caracter); //EOF : End of file (final del archivo) y el putchar() es para mostrar el caracter
    }
 
    fclose(archivo);

    return 0;
}