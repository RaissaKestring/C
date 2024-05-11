#include<stdio.h>
main()
{
	int i, num, neg=0, soma=0;
	
	for(i=1; i<=10;i++) {
		printf("Digite um numero: ");
		scanf("%d",&num);
		
		if (num<0) {
			neg= neg + 1;
			// neg++
		} else {
			soma=soma+neg;
		}
	}
	
	printf("\nA soma dos positivos e: %d", soma);
	printf("\nA quantidade de negativos e: %d", neg);
}
