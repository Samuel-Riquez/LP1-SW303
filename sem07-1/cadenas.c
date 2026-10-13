#include <stdio.h>
#include <string.h>

int main(){

    char texto[] = "Hola Mundo";
    size_t cantidad = strlen(texto);

    printf("Cantidad de caracteres de ''%s'' es: %zu", texto, cantidad);
    


    return 0;
}