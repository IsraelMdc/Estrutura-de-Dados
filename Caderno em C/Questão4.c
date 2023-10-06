/*
Questão 4
	4. A prefeitura da Serra abriu uma linha de crédito para os funcionários estatutários. O valor
máximo da prestação não poderá ultrapassar 30% do salário bruto (salário mais benefícios sem
desconto de impostos). Faça um programa que leia o salário bruto de uma pessoa e imprima
na tela o valor máximo possível de prestação para este funcionário.
*/

#include<stdio.h>

int credito;
int salario;

int main ()
{
	printf("Digite o valor do salario bruto: \n ");
	scanf("%d", &salario);
	
	credito = salario *0.3;
	
	printf("O valor de crédito disponibilizado e de : %d", credito);
	
	return 0;
}
