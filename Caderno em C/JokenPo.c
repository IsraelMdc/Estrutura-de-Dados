#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( )
{
	/*INICIO, Declaração de variáveis*/
	int num_jogador;
	int num_pc;
	/*FIM, Declaração de variáveis*/
	
	printf("Bem vindo ao seu jogo! ");
	printf("Assuma que o numero 0 representa pedra, 1 representa papel e 2 representa tesoura.\nSabendo que pedra ganha de tesoura, papel ganha de pedra e tesoura ganha de papel. Faça sua escolha.");
	scanf("%d", &num_jogador);
	
	num_pc = rand();
	printf("%d",num_pc);

	
return 0 ;
}