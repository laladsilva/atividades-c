/*6) Desenvolva um algoritmo que peça para que o usuário informe a base e a altura de um 
retângulo, e um terceiro número inteiro "op". Caso o usuário escolha "op" igual a 0, 
calcule e mostre o perímetro do retângulo. Caso o usuário insira um valor 1 para "op", 
calcule e mostre a área do retângulo. Se o usuário inserir um valor diferente de 0 e 1 
para "op", mostrar a mensagem "Opção inválida.". */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv []) {

	int op;
	float n1, n2, per, area;

printf ("Insira a base:\n");
scanf ("%f", &n1);
printf ("Insira a altura:\n");
scanf ("%f", &n2);
printf ("Opcoes de processamento:\n");
printf ("Digite 0 para calcular o Perimetro:\n");
printf ("Digite 1 para calcular a area :\n");
scanf ("%d", &op);

switch(op){
	case 0:
		per = 2 * (n1 + n2);
		printf ("Perimetro: %f.\n", per);
		break;
	case 1:
		area = n1 * n2;
		printf ("area: %f.\n", area);
		break;
	default:
		printf ("opcao invalida.\n");
	}

/*if (op == 0) {
    per = 2 * (n1 + n2);
    printf("Perimetro: %.2f\n", per);
}
else if (op == 1) {
    area = n1 * n2;
    printf("Area: %.2f\n", area);
}
else {
    printf("Opcao invalida.\n");
}
*/


system ("pause");

return 0;
}
