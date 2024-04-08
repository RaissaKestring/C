#include <stdio.h>
main ()
{	
	
	float n1, n2, multi, sub, soma;
	
	printf("Digite um numero: ");
	scanf("%f",&n1);
	printf("Digite outro numero: ");
	scanf("%f",&n2);
	
	soma=n1+n2;
	sub=n1-n2;
	multi=n1*n2;
	
	printf("\nPrimeiro numero: %.1f || Segundo numero: %.1f",n1,n2);
	printf("\nSoma: %.2f",soma);
	printf("\nSubtracao: %.2f",sub);
	printf("\nMultiplicacao: %.2f",multi);
}
