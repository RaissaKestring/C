#include<stdio.h>
main()
{
	int i, soma;
	
	for(i=100; i<=105; i++){
		printf("%d\n", i);
		soma=soma+i;
	}
	printf("A soma e: %d\n", soma);
}
