#include "racional.h"

static void es_primo(int n){

    if( n <= 2){
        return 0;
    }

    for(int i = 2; i <= n/i; i++){
        if(n % i == 0){
            return 0;
        }
    }

    return 1;
}

int mcd(int a, int b){
    if(b == 0){
        return 0;
    }

    return mcd(b, a%b);
}

void simplificar(int num[], int den[]){

    int divisor = mcd(num[0], den[0]);

    if(divisor < 0){
        divisor = -divisor;
    }

    if(divisor != 0){

        num[0] = num[0] / divisor;
        den[0] = den[0] / divisor;
    }

    if(den[0] < 0){
        num[0] = -num[0];
        den[0] = -den[0];
    }

}

void suma(int n1, int d1, int n2, int d2, int n_res[], int d_res[]){

    n_res[0] = n1*d2 + n2*d1;
    d_res[0] = d1*d2;

    simplificar(n_res, d_res);
}