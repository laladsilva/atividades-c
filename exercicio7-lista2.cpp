/* 
7) (Adaptado de ASCENCIO e CAMPOS, 2008) A nota final de um estudante é calculada a 
partir de três notas atribuídas respectivamente a um trabalho de laboratório, a uma 
avaliação semestral e a um exame final. A média das três notas mencionadas 
anteriormente obedece aos pesos a seguir: 
 
Nota Peso 
Trabalho de laboratório 2 
Avaliação semestral 3 
Exame final 4 
 
Faça um programa que receba as três notas, calcule e mostre a média ponderada e o 
conceito que segue a tabela abaixo: 
  
Média ponderada Conceito 
8,0 ~ 10,0 A 
7,0 ~ 8,0 B 
6,0 ~ 7,0 C 
5,0 ~ 6,0 D 
0,0 ~ 5,0 E

media ponderada: 2+3+4 (N1​× 2 )+ (N2​× 3 )+(N3​×4)​ 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv []) {
	setlocale (LC_ALL, "Portuguese_Brazil");
	float n1, n2, n3, media;
	

	
printf ("Insira a nota do trabalho de laboratório:\n");	
scanf ("%f",&n1);
printf ("Insira a nota da avaliaca semestral:\n");	
scanf ("%f",&n2);
printf ("Insira a nota do exame final:\n");	
scanf ("%f",&n3);
	
media =  (( n1 * 2 ) + ( n2 * 3 ) + ( n3 * 4 ))/ 9;

if (media >= 8 && media <= 10) {
	printf ("Media ponderada: %f.\n", media);
	printf ("Conceito A.\n");
} else if (media >= 7 && media < 8) { /*nessa situação fica sem <= pois a igualdade só pode estar em 1 situação*/
	printf ("Media ponderada: %f.\n", media);
	printf ("Conceito B.\n");
} else if (media >= 6 && media < 7) {
	printf ("Media ponderada: %f.\n", media);
	printf ("Conceito C.\n");
} else if (media >= 5 && media < 6) {
	printf ("Media ponderada: %f.\n", media);
	printf ("Conceito D.\n");
} else if (media == 0 && media < 5) {
	printf ("Media ponderada: %f.\n", media);
	printf ("Conceito E.\n");
}

system ("pause");
return 0;

}
