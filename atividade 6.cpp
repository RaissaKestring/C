#include<stdio.h>
main()

{ 
float num1, vend, resu, res2;
printf("informe o valor do salario ");
scanf("%f", &num1);
printf("informe a venda");
scanf("%f", &vend);
res2=vend*4/100;
resu = num1 + res2;
printf("o valor do salario e: %f\n", resu);
printf("e sua comissao e %f", res2);

	
}
