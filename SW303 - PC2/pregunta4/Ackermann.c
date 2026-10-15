
#include <stdio.h>

int akcermann(int m, int n) {
    
    if(m == 0){
        return n + 1;
    }
    else if(n == 0) {
        return akcermann(m - 1, 1);
    }
    else{
        return akcermann(m - 1, akcermann(m, n - 1));
    }
}

int main() {

    int resultado = akcermann(3, 4);

    printf("Resultado: %d \n", resultado);

    return 0;
}
