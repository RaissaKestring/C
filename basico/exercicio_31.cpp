#include <stdio.h>
main()
{
	float sal, aum, nsal, porcent;
	
	printf("\nQual o salario do funcionario: ");
	scanf("%f",&sal);
	printf("\nQual o porcentual de aumento: ");
	scanf("%f",&porcent);
	nsal=sal*porcent;
	aum=nsal+sal;
	printf("\nO valor do aumento foi de: %.2f",nsal);
	printf("\nO novo salario foi de: %.2f",aum);
}
