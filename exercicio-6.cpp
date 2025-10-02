/* 6) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba o salário-base 
de um funcionário, calcule e mostre o salário a receber, sabendo-se que esse funcionário 
tem gratificação de 5% sobre o salário-base e paga imposto de 7% sobre o salário-base. */

#include <stdio.h>
int main () {
	float sal , liquido;
	printf ("Insita o salario base:\n");
	scanf ("%f", &sal);
	liquido = sal + sal*0.05 - sal*0.07; 
	printf ("salario a receber:%.2f\n", liquido);
	
	return 0;
}