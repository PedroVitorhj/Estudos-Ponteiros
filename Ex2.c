#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b;
    int *p;

    printf("\nAtribua um valor a: ");
    scanf("%d", &a);

    printf("\nAtribua um valor b: ");
    scanf("%d", &b);

    printf("\nEnderešo a: %p",&a);
    printf("\nEnderešo b: %p",&b);


    if(&a > &b){

        p = &a;

    }
    else{

        p = &b;

    }

    printf("\nConteudo maior enderešo: %d",*p);
}
