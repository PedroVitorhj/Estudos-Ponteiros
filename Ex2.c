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

    printf("\nEndere�o a: %p",&a);
    printf("\nEndere�o b: %p",&b);


    if(&a > &b){

        p = &a;

    }
    else{

        p = &b;

    }

    printf("\nConteudo maior endere�o: %d",*p);
}
