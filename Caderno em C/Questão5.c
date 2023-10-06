/*
Questão 5
	5. Faça um programa para calcular as raízes reais de uma equação do 2º grau (ax2 + bx + c)
dado que seus coeficientes são informados pelo usuário. Utilize uma variável real delta para
armazenar o resultado de b**2 - 4ac.
*/

float delta;
int coeficiente_a;
int coeficiente_b;
int coeficiente_c;
 

void main()
{
	printf("Digite os valores dos coeficientes A,B,C \n");
	scanf("%d \n %d \n %d", &coeficiente_a,&coeficiente_b,&coeficiente_c);
	
	delta = (coeficiente_b * coeficiente_b) -4 * coeficiente_a * coeficiente_c;
	
	printf("O valor de delta e de: %3.f", delta);
	
	return;
}

