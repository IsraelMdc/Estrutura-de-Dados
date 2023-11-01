#include <stdio.h>
#include <stdlib.h>

void main()
{
    
    int size;
    int i;
    int *vector; 
    int soma_total;
    int media_v;

    printf("digite o tamanho do vetor: ");
    scanf("%d", &size);
    printf("Preencha o vetor com 5 valores reais: \n");
    vector = (int *)malloc(sizeof(int)*size);
    soma_total = 0;

    for( i = 0; i < size ; i++)
    {
        printf("Valor %d :", (i+1));
        scanf("%d", &vector[i]);
        soma_total = soma_total+ vector[i];
        printf("Soma total: %d \n",soma_total);
    }

    media_v = soma_total / size;

    printf("Soma dos valores: %d \n",soma_total);

    printf("Média dos valores: %d \n",media_v);

    free(vector);
}