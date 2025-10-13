/*
3) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba um número 
inteiro e verifique se esse número é par ou ímpar. 
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv []) {
		
		int n1;


printf("Insira um numero:\n");
scanf ("%d", &n1);

if (n1 % 2 == 0) {
	printf("PAR\n"); 
	} else {
		printf("Impar\n"); 
	}
	
	 return 0;
	}
