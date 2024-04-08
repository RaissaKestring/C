#include <stdio.h>
main ()
{
	
	float basem, baseme, altura, area;
	
	printf("qual a area da base maior: ");
	scanf("%f",&basem);
	printf("qual a area da base menor: ");
	scanf("%f",&baseme);
	print("qual a altura do trapezio: ");
	scanf("%f",&altura);
	area=(basem + baseme)*altura/2;
	printf("a area do trapezio e igual a: %.2f",area);
}
