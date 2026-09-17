#include <stdio.h>

int main(){
    int i = 5, j;

    j = i++;
    printf(" j = i++ -> %d \n", j);

    i = 5;
    j = ++i;
    printf(" j = ++i -> %d \n", j);



}