/*) Desenvolva um algoritmo que receba três números. O algoritmo deve imprimir 
"Condição satisfeita", na tela, caso o primeiro dado inserido seja maior do que os outros 
dois (o primeiro não pode ser igual a nenhum). Caso contrário, deve ser impressa a 
mensagem: "Erro". 
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv []) {

	float n1, n2, n3;

	printf ("Insira o primeiro numero:\n");
scanf ("%f", &n1);
printf ("Insira o segundo numero:\n");
scanf ("%f", &n2);
printf ("Insira o terceiro numero:\n");
scanf ("%f", &n3);

/*if (n1 > n2 && n3){
	printf ("Condicao satisfeita %f.\n", n1);
} else {
	if (n1 == n2 || n3){
	
	printf ("ERRO\n");	
}
Isso não faz sentido lógico, porque n3 sozinho é tratado como “verdadeiro se diferente de 0”.
O correto é comparar explicitamente:

if (n1 > n2 && n1 > n3)


else

O bloco interno if (n1 == n2 || n3) não fazia sentido — foi substituído por um else direto, já que só há duas opções possíveis: ou a condição é satisfeita, ou não.
*/

 if((n1 > n2) && (n1 > n3)){ 
        printf("Condicaoo satisfeita.\n"); 
    } else { 
        printf("Erro.\n"); 
    } 
	return 0;
}





 