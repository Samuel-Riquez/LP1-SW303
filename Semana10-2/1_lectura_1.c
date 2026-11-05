//Lectura linea por linea
#include <stdio.h>

int main(){

    FILE *archivo;
    char linea[100]; //puede leer como maximo 99 caracteres por iteracion

    archivo = fopen("datos.txt", "r"); //archivo = fopen("nombre del archido", "modo") , r: read

    if(archivo == NULL){
        printf("Error al abrir el archivo. \n");
        return 1; //para que no se continue leyendo el fgets si ya falló
    }

    while(fgets(linea, sizeof(linea), archivo) != NULL){  //fgets(destino, tamaño, archivo); sirve para leer texto de un archivo y guardarlo en un array
        printf("%s", linea); //El Null significa que mientras el fgets siga leyendo el texto, se va aseguir ejecutando el while
    }

    fclose(archivo);

    return 0;
}