#include <stdio.h>
main ()
{	
	int hora, num;
	float inss, liq;
	
	printf("\nValor da hora aula: ");
	scanf("%d",&hora);
	printf("\nNumero de aulas: ");
	scanf("%d",&num);
	printf("\nPercentual de desconto INSS: ");
	scanf("%f",&inss);
	liq=(hora*num)-inss;
	printf("\nSalario liquido: %.2f",liq);
}
