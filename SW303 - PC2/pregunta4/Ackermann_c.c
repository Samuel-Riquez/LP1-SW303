
#include <stdio.h>

int contador_llamadas(int sumar) {
    
    static int contador = 0;

    if(sumar == 1){
        contador = contador + 1;
    }

    return contador;
}

int ackermann(int m, int n) {
    contador_llamadas(1);

    if(m == 0){
        return n + 1;
    }
    else if(n == 0){
        return ackermann(m - 1, 1);
    }
    else{
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {
    int resultado = ackermann(3, 4);

    printf("Resultado: %d \n", resultado);
    printf("Total de llamadas: %d \n", contador_llamadas(0));

    return 0;
}
