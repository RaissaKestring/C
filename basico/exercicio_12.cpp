#include <stdio.h>
main ()
{	
	
	//exercicio 12
	float salario, salariomin, quantidade;
	
	printf("qual o valor do seu salario? ");
	scanf("%f",&salario);
	salariomin=1400;
	quantidade=salario/salariomin;
	printf("a quantidade de salarios minimos que voce ganha e de: %.2f",quantidade);
	
}
