#include <stdio.h>
main ()
{
	int numero, n1, n2;
	
	printf("Digite um numero inteiro: ");
	scanf("%i",&numero);
	
	n1=numero-1;
	n2=numero+1;
	
	printf("\nantecessor: %i",n1);
	printf("\nsucessor: %i",n2);
	
}
