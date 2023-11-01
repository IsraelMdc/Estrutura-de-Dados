#include <stdlib.h>
#include <stdio.h>


void main()
{
    int *vector;
    int *vector1; 
    int size;
    int i;

    printf("digite o tamanho do vetor: \n");
    scanf("%d", &size);

    vector = (int *)malloc(sizeof(int)*size);
    vector1 = (int *)malloc(sizeof(int)*size);

    for(i = 0; i < size ; i++)
    {
        printf("Valor %d :", (i+1));
        scanf("%d", &vector[i]);

    }
}