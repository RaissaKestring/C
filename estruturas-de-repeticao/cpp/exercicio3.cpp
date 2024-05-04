#include<stdio.h>
main()
{
	int n, num, i;
	
	printf("Informe a quantidade de numeros: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++) {
		printf("Informe um numero: ");
		scanf("%d", &num);
		printf("O triplo e: %d\n", num*3);
	}
}
