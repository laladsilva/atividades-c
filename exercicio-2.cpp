/*2) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba três notas, 
calcule e mostre a média aritmética entre elas.*/

#include <stdio.h>
int main () {
	float n1, n2, n3, m;
	
	printf ("Informe tres notas, em sequencia:\n");
	
	scanf ("%f", &n1);
	scanf ("%f", &n2);
	scanf ("%f", &n3);
	
	m = n1 + n2 + n3/3; 
		
	printf ("Resultado da media: %f\n", m);
	  
	   return 0;

}