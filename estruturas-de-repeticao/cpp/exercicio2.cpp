#include<stdio.h>
#include<math.h>
main()
{
	
	int i;
	float num, media, soma;
	
	for(i=1; i<=4; i++) {
		printf("Informe um numero: ");
		scanf("%f",&num);
		soma=soma+num;
	}
	printf("A media e: %.2f\n", soma/4);
}
