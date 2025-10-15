/* Desenvolva um algoritmo que simule uma calculadora. Você deve dar a opção de o 
usuário escolher entre: 1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - Dividir. O usuário só 
conseguirá processar dois números inteiros por vez.
*/

#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char *argv []) {
	int op;
	float n1, n2, res;

printf ("Digite 1 para somar:\n");
printf ("Digite 2 para subtrair:\n");
printf ("Digite 3 para multiplicar:\n");
printf ("Digite 4 para dividir:\n");
scanf ("%d", &op);

printf ("Digite o primeiro valor:\n");
scanf ("%f", &n1);

printf ("Digite o segundo valor:\n");
scanf ("%f", &n2);

switch(op){
		case 1: 
			res = n1 + n2;
			printf ("Soma: %f.\n", res);
			break;
		case 2:
			res= n1 - n2;
			printf ("Subtr.: %f.\n", res);
		case 3:
			res = n1 * n2;
			printf ("Mult.: %f.\n", res);
		case 4:
			if (n2 != 0){
				res = n1 / n2;
				printf ("Div.: %f.\n", res);
			} else {
				printf ("divisao por zero.\n");
			}
			break;
}

/* if (op == 1) {
	res = n1 + n2;
	printf ("soma: %f.\n", res);
}

if (op == 2) {
	res = n1 - n2;
	printf ("subtr: %f.\n", res);
}

if (op == 3) {
	res = n1 * n2;
	printf ("mult: %f.\n", res);
}

if (op == 4) {
	if (n2 == 0) {
		printf("Divisao por zero.\n");
	} else {
		res= n1/n2;
		printf("Div.:%f.\n", res);
	}
	res = n1 / n2;
	printf ("div: %f.\n", res);
}
*/
system ("pause");

return 0;

}