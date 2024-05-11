#include<stdio.h>
main ()
{
	int i, num, par;
	float percent;
	
	for (i=1;i<=5;i++) {
		printf("Digite um numero: ");
		scanf("%d",&num);
		
		if (num%2==0) {
			par++;
		}
	}
	
	percent=(par / 5.0) * 100;
	printf("A porcentagem de numeros e: %f", percent);
}
