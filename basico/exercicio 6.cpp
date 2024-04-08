#include <stdio.h>
main ()
{	
	
	float salario, vendas, comissao, salariofinal;
	
	printf("qual o seu salario: ");
	scanf("%f",&salario);
	printf("qual foi o valor de suas vendas: ");
	scanf("%f",&vendas);
	comissao=vendas*0.04;
	salariofinal=salario+comissao;
	printf("o seu salario final e de: %.2f",salariofinal);
}
