#include<stdio.h>
main()
{
	float p1, p2;
	char nome1[30], nome2[30];
	
	printf("Informe o nome da pessoa 1: ");
	gets(nome1);
	printf("Informe o nome da pessoa 2: ");
	gets(nome2);
	printf("Informe o peso da pessoa 1: ");
	scanf("%f",&p1);
	printf("Informe o peso da pessoa 2: ");
	scanf("%f",&p2);
	
	if(p1>p2) {
		printf("A pessoa mais pesada e: %s", nome1);
	} else {
		printf("A pessoa mais pesada e: %s", nome2);
	}
	
}
