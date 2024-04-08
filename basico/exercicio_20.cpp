#include <stdio.h>
main ()
{
	int A, B;
	
	printf("\nValor de A: ");
	scanf("%i",&A);
	printf("Valor de B: ");
	scanf("%i",&B);
	
	A=B;
	B=A;
	
	printf("\nNovo valor de A: %i",A);
	printf("\nNovo valor de B: %i",B);
}
