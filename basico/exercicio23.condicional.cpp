#include<stdio.h>
main()
{
	int n1;
	
	printf("Numero: ");
	scanf("%d",&n1);
	
	if(n1%2==0) {
		printf("PAR");
	} else {
		printf("IMPAR");
	}
}
