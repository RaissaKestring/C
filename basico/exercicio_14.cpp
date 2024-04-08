#include <stdio.h>
main ()
{
	
	float salario, agua, energia, novosalario, multa, nagua, nenergia;
	
	printf("salario de Joao: ");
	scanf("%f",&salario);
	printf("conta de agua: ");
	scanf("%f",&agua);
	printf("conta de energia: ");
	scanf("%f",&energia);
	multa=0.02;
	nagua=(agua*multa);
	nenergia=(energia*multa);
	novosalario=(salario-agua-energia);
	printf("restara do salario de Joao: %.2f",novosalario);
}
