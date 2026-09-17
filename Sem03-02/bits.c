#include <stdio.h>

void imprimir_binario(unsigned char n){
    for(int i = 7; i >= 0; i--){
        putchar((n>>i) & 1 ? '1' : '0');
    }
    putchar('n');
}

int main(){
    unsigned char a = 0b11001010;
    unsigned char b = 0b10110100;

    /*NOTA
    & : and / y para numeros binarios
    | : or / o para numeros binarios
    ^ : xor, devuelve 1 si son dif y 0 si son iguales (alt + 94) 
    ~ : not, negacion -> cambia 0 por 1 y viceversa (alt 126)
    <<: desplazamiento a la izquierda (multiplicar por 2)
    >>: desplazamiento a la derecha (dividir entre 2)
    
    */

    printf("a = "); imprimir_binario(a);
    printf("\n b = "); imprimir_binario(b);
    printf("\n a & b = "); imprimir_binario(a & b); // AND
    printf("\n a | b = "); imprimir_binario(a | b); // OR
    printf("\n a ^ b = "); imprimir_binario(a ^ b); // XOR
    printf("\n ~a = "); imprimir_binario(~a); // NOT
    printf("\n a << 2 = "); imprimir_binario(a << 2); // Desplazamiento izq.
    printf("\n a >> 2 = "); imprimir_binario(a >> 2); // Desplazamiento der.

    return 0;
}