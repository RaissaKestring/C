#include <stdio.h>
main ()
{
	float sal, porcent;
	
	printf("informe o salario: ");
	scanf("%f",&sal);
	porcent=sal*0.25;
	sal=sal+porcent;
	printf("O valor do novo salario e de: %.2f", sal);
}
