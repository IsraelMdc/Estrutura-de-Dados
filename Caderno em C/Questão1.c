/*
1 Estruturas sequenciais
	1. Faça um programa que leia a temperatura em graus Farenheit (F), converta-a para graus
Celsius e mostre a temperatura convertida na tela. A fórmula para conversão é
C = 5 × (F - 32)/9
*/

//Declaracao de variaveis
#include <stdio.h>
#include <conio.h>

//Declaracao de variaveis
int temp_f;
int temp_c;

int main()
{
	printf("Digite a temperatura em Farenheit: \n");
	//Entrada da temperatura
	scanf("%d",&temp_f);	
	
	//Print da temperatura em Farenheit
	printf("Temperatura em Farenheit %d \n",temp_f);
	
	//Processamento dos dados
	//conversão da temperatura para Celsius
	temp_c = 5 * (temp_f - 32)/9;
	
	//Escrita da temperatura em Celsius na tela
	printf("temperatura em Celsius %d \n",temp_c);
	return 0;
}

