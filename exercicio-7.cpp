/*7) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba o salário-base 
de um funcionário, calcule e mostre o seu salário a receber, sabendo-se que esse 
funcionário teve gratificação de R$ 600,00 e paga imposto de 10% sobre o salário base. */

#include <stdio.h>
int main () {
	float sal, liquido;
	printf ("Insita o salario base:\n");
	scanf ("%f", &sal);
	liquido = sal + 600.0 - (sal * 0.1);
	printf ("Salario a receber:%.2f\n", liquido);
	
	return 0;

}