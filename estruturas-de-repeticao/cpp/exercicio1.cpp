#include<stdio.h>
#include<math.h>
main()
{
	
	int i;
	float num, quad;
	
	for(i=1; i<=4; i++) {
		printf("Informe um numero: ");
		scanf("%f",&num);
		quad=sqrt(num);
		printf("A raiz quadrada e: %.2f\n", quad);
	}
}
