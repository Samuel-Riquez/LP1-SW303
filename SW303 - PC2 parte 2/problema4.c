#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *clonar(const char *origen){

    if(origen == NULL){
        return NULL;
    }

    char *copia = malloc(strlen(origen) + 1);
    if(copia == NULL){
        return NULL;
    }

    strcpy(copia, origen);
    return copia;


}

int comparar(const char *a, const char *b){
    int resultado = strcmp(a,b);

    if(resultado < 0){
        return -1;
    }

    if(resultado > 0){
        return 1;
    }

    return 0;
}

int main(){

    char cadena1[128];
    char cadena2[128];

    printf("Cadena 1: ");
    if (fgets(cadena1, 128, stdin) == NULL) {
        return 1;
    }

    printf("Cadena 2: ");
    if (fgets(cadena2, 128, stdin) == NULL) {
        return 1;
    }

    cadena1[strcspn(cadena1, "\n")] = '\0';
    cadena2[strcspn(cadena2, "\n")] = '\0';

    char *clon1 = clonar(cadena1);
    char *clon2 = clonar(cadena2);

    if (clon1 == NULL || clon2 == NULL) {
        printf("Error al reservar memoria. \n");
        free(clon1);
        free(clon2);
        return 1;
    }

    printf("clonar(cadena1) = %s (%d bytes reservados)\n",clon1, (int)strlen(clon1) + 1);

    printf("clonar(cadena2) = %s (%d bytes reservados) \n",clon2, (int)strlen(clon2) + 1);

    int resultado = comparar(clon1, clon2);

    printf("comparar(%s , %s) = %d \n",clon1, clon2, resultado);

    free(clon1);
    free(clon2);

    clon1 = NULL;
    clon2 = NULL;

    printf("Tras liberar: \n");
    printf("clon1 = %s, clon2 = %s \n", clon1 == NULL ? "(nil)" : "no NULL", clon2 == NULL ? "(nil)" : "no NULL");

    return 0;
}