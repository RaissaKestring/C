#include <stdio.h>
main ()
{	
	
	int numero;
	
	printf("digite um numero: ");
	scanf("%i",&numero);
	printf("tabuada de: %i\n", numero);
	for (int i = 1; i <=10; ++i) {
		printf("%i x %i = %i\n", numero, i, numero * i);
	}
	
	return 0;
}
