#include <stdio.h>
main ()
{
	float n1, n2, n3, mult;
	
	printf("digite um numero: ");
	scanf("%f", &n1);
	printf("digite um segundo numero: ");
	scanf("%f", &n2);
	printf("digite um terceiro numero: ");
	scanf("%f", &n3);
	mult=n1*n2*n3;
	printf("a multiplicacao desses numeros foi de : %.2f", mult);
}
