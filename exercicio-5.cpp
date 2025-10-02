/*5) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba o salário de 
um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o 
novo salário. */

/* #include <stdio.h>
int main () {
	float sal, percent, novo_sal;
	printf ("Insira o salario:\n");
	scanf ("%f", &sal);
	printf ("Insira o percentual do aumento:\n");
	scanf ("%f", &percent);
	scanf ("%f", &novo_sal);
	novo_sal = sal+sal * (percent/100);
	printf ("Valor do aumento: %.2f\n", percent);
	printf ("Novo Salario: %.2f\n", novo_sal);
}
*/

/*RESPOSTA DO PROF*/
#include <stdio.h> 
int main(){ 
float sal, perc, aumento, novo_sal; 
printf("Insira o salario\n"); 
scanf("%f", &sal); 
printf("Insira o percentual de aumento:\n"); 
scanf("%f", &perc); 
aumento = sal * perc/100.0; 

novo_sal = sal + aumento; 

printf("Valor do aumento: %.2f.\n", aumento); 
printf("Novo salario: %.2f.\n", novo_sal);

return 0;
}