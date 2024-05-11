#include<stdio.h>
main ()
{
	int i, num, par=0, impar=0;
	
	for(i=1; i<=5;i++) {
		
		printf("Digite um numero ");
		scanf("%d", &num);
		
		if(num%2==0) {
			par++;
		} else {
			impar++;
		}
	}
	
	printf("\nA quantidade de numeros pares e: %d", par);
	printf("\nA quantidade de numeros impares e: %d", impar);
	
}
