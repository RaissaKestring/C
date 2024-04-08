#include <stdio.h>
main ()
{
	float n1, n2, div;
	
	printf("digite um numero: ");
	scanf("%f", &n1);
	printf("digite outro numero: ");
	scanf("%f", &n2);
	div=n1/n2;
	printf("a divisao desses numeros foi de: %.2f", div);
}
