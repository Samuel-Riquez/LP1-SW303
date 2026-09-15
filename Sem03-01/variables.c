#include <stdio.h>
#include <string.h>

int main(){
    int a = 25;
    float b = 7.5;
    double c = 6.023e23; //e : potencia de 10
    char s = 'A';
    char *nombre = "UNI";

    printf("a = %d tiene %d bytes \n", a, sizeof(a));
    printf("b = %f tiene %d bytes \n", b, sizeof(b));
    printf("c = %lf tiene %d bytes \n", c, sizeof(c));
    printf("s = %c tiene %d bytes \n", s, sizeof(s));
    printf("*nombre = %s ocupa %d bytes y tiene %d caracteres \n", nombre, sizeof(nombre), strlen(nombre)); //Puntero ocupa 8 bytes



    return 0;
}