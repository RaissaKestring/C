#include <stdio.h>
main ()
{
	float pfab, txlucro, tximp;
	
	printf("Informe o preco de fabrica: ");
	scanf("%f",&pfab);
	printf("Informe  a taxa de lucro: ");
	scanf("%f",&txlucro);
	printf("Informe a taxa de imposto: ");
	scanf("%f",&tximp);
	lucro=pfab*txlucro/100;
	imp=pfab*tximp/100;
	final=pfab+lucro+imp;
	printf("Valor do lucro: %.2f",lucro)
	
}
