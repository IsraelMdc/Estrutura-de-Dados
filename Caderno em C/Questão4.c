/*
Quest�o 4
	4. A prefeitura da Serra abriu uma linha de cr�dito para os funcion�rios estatut�rios. O valor
m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio bruto (sal�rio mais benef�cios sem
desconto de impostos). Fa�a um programa que leia o sal�rio bruto de uma pessoa e imprima
na tela o valor m�ximo poss�vel de presta��o para este funcion�rio.
*/

#include<stdio.h>

int credito;
int salario;

int main ()
{
	printf("Digite o valor do salario bruto: \n ");
	scanf("%d", &salario);
	
	credito = salario *0.3;
	
	printf("O valor de cr�dito disponibilizado e de : %d", credito);
	
	return 0;
}
