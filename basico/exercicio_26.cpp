#include <stdio.h>
#include <math.h>
main ()
{
	float n1, n2, x;
	
	printf("Informe um numero: ");
	scanf("%f",&n1);
	printf("Informe outro numero: ");
	scanf("%f",&n2);
	x=n1+n2+2;
	x=n1-n2;
	printf("O resultado e de: %.2f", x);
}
