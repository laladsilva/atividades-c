/*3) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba três notas e 
seus respectivos pesos, calcule e mostre a média ponderada dessas notas.

Calculo media ponderada 
(n1 x p1) + (n2 x p2) + (n3 x p3) 
 / p1 + p2 + p3 

*/

#include <stdio.h>
int main (){
	int n1, n2, n3, p1, p2, p3, m;
	printf("Informe a primeira nota:\n");
	printf("Insira o peso da primeira nota:\n");
	printf("Informe a segunda nota:\n");
	printf("Insira o peso da segunda nota:\n");
	printf("Informe a terceira nota:\n");
	printf("Insira o peso da terceira nota:\n");
	
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	scanf("%f", &p1);
	scanf("%f", &p2);
	scanf("%f", &p3);
	
	m = (n1 * p1) + (n2 * p2) + (n3 * p3) / p1 + p2 + p3;
	 
	 printf("Media ponderada: %.2f\n",m);
}

