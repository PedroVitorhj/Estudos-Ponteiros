#include <stdio.h>
#include <stdlib.h>

int main()
{

    float array[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;
    float *p = array;

    for(i=0; i < 10; i++){

        printf("Endereco: %p / Conteudo: %.2f",(p+i),*(p+i));
        printf("\n\n");

    }
}
