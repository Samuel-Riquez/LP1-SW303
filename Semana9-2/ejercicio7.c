#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Cantidad de elementos: ");

    if (scanf("%d", &n) != 1 || n <= 0) { // Para detectar el error en la lectura del valor, ademas n debe ser mayor que 0
        printf("Cantidad invalida.\n");
        return 1; // Se termina el programa
    }
    
    int *ptr = malloc((size_t)n * sizeof *ptr); // Se reserva el espacio para n enteros
    if (ptr == NULL) {
        printf("No se pudo reservar memoria.\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        ptr[i] = (i + 1) * 10;
    }
    
    printf("Elementos del arreglo:\n");
    
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    
    printf("\n");
    
    free(ptr);
    
    ptr = NULL;
    return 0;
}