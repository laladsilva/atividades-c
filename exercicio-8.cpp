/*) 8) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba o valor de um 
depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor 
total depois do rendimento. */

#include <stdio.h>
int main () {
	float dep, taxa, rend, total;
	printf ("Insita o valor do deposito:\n");
	scanf ("%f", &dep);
	printf ("Qual e a taxa?:\n");
	scanf ("%f", &taxa);
/*	rend = dep * 15/100;
	total = dep = rend; */
	rend = dep*taxa/100.0; 
    total = dep + rend; 
	printf ("Rendimento:%.2f\n", rend);
	printf ("Valor total:%.2f\n", total);
	
	return 0;
}