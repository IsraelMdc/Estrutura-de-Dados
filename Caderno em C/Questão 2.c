
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
	printf("Digite a temperatura em Celsius: \n");
	//Entrada da temperatura
	scanf("%d",&temp_c);	
	
	//Print da temperatura em Farenheit
	printf("Temperatura em Celsius %d \n",temp_c);
	
	//Processamento dos dados
	//conversão da temperatura para Farenheit
	temp_f = (temp_c * 9/5) + 32;
	
	//Escrita da temperatura em Celsius na tela
	printf("temperatura em Farenheit %d \n",temp_f);
	return 0;
}

