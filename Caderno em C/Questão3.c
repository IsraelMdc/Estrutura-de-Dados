
//Quest�o 3
//3. Fa�a um programa que leia tr�s notas e imprima na tela a m�dia aritm�tica delas

#include<stdio.h> 

int n1,n2,n3;
float n_media;

void main ()
{
	
	printf("Digite as tres notas: \n");
	scanf("%d %d %d", &n1,&n2,&n3);
	
	n_media = (n1 + n2 + n3)/3;
	
	printf("O valor da media das notas e : %3.f \n ", n_media );
	
	return ;
}
