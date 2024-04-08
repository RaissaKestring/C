#include <stdio.h>
main ()
{	
	
	float vert, horiz, area, potencia;
	
	printf("Qual a largura vertical da casa (em metros): ");
	scanf("%f",&vert);
	printf("Qual a largura horizontal da casa (em metros): ");
	scanf("%f",&horiz);
	area=vert*horiz;
	potencia=18*area;
printf("area em (m2): %.2f\n e a potencia(W): %.2f",area,potencia);
	
}
