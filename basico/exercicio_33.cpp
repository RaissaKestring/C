#include <stdio.h>
main()
{	
	float sal, receber;
	
	printf("Qual o salario base: ");
	scanf("%f",&sal);
	receber=(sal+50)-0.1;
	printf("Salario a receber: %.2f",receber);
}
