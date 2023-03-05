#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 0, b = 0;
    int *p;

    if(&a > &b){

        p = &a;

    }
    else{

        p = &b;

    }

    printf("Maior endereço: %p",p);
}
