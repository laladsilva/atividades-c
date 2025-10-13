/* 
1) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba dois números 
e mostre o maior deles. Caso eles sejam iguais, deve-se mostrar a mensagem "Os 
números são iguais". 
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv []) {
	
	float n1, n2;
	printf ("Insira o primeiro numero:\n");
	scanf ("%f", &n1);
	printf ("Insira o segundo numero:\n");
	scanf ("%f", &n2);
	/*
	if (n1 > n2) {
		printf ("Maior: %.1f.\n", n1);
	}
		if (n2> n1) {
		printf ("Maior: %.1f.\n", n2);
	}
	if (n1 == n2){
		printf ("os numeros sao iguais.\n");
	}
	a maquina vai avaliar todos os if independente se a primeira for verdadeira,
	as outras vão ser testadas.
	*/ 
	
	if(n1 > n1){
		printf("O maior e: %f.\n", n1);
	} else {
		if (n2> n1){
			printf("O maior e: %f.\n", n2);
		} else {
			printf ("os numeros sao iguais.\n");
		}
	}
	
	system ("pause");
	
	
	return 0;
}