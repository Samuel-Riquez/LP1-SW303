#include <stdio.h>

int main(){
    int anio = 2000;
    int bisiesto = (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);

    printf("El anio %d es bisiesto: %d", anio, bisiesto);

    return 0;
}