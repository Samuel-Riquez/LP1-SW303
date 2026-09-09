#include <stdio.h>
int main(){

    char nombre[50];
    float nota1, nota2, nota3, nota4;
    int i;
    int MAX_ALUMNOS = 5;

    printf("\n ---REGISTRO DE NOTAS--- \n");

    for(i = 1; i < MAX_ALUMNOS; i++){

        printf("Estudiante %d: ", i);

        printf("Nombre: ");

        do{
            printf("Ingrese la nota 1 (0-100): ");
            scanf("%.2f", &nota1);
        }while( nota1 < 0 || nota1 > 100);

        do{
            printf("Ingrese la nota 2 (0-100): ");
            scanf("%.2f", &nota2);
        }while( nota2 < 0 || nota2 > 100);

        do{
            printf("Ingrese la nota 3 (0-100): ");
            scanf("%.2f", &nota3);
        }while( nota3 < 0 || nota3 > 100);
    }

    float promedio;

    promedio = (nota1 + nota2 + nota3)/3.00;
    printf("El promedio del alumno %d es: %.2f", i, promedio);

}