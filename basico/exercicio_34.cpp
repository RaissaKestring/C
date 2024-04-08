#include <stdio.h>
main()
{
	float base, impo, grat, final;
	
	printf("Salario base: ");
	scanf("%f",&base);
	grat=base*0.2;
	impo=base*0.15;
	final=(base+grat)-impo;
	printf("Salario final: %.2f",final);
}
