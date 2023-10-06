
//Questão 2
//2.O mesmo que o exercício anterior, porém convertendo de Celsius para Farenheit.


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

