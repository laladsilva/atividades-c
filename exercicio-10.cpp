/*10) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que calcule e mostre a 
área de um círculo. Sabe-se que: Área = Pi * R², aonde Pi = 3,14. */

#include <stdio.h>
#define P 3.14
int main (){
	float raio, area;
	printf ("Insira o raio:\n");
	scanf ("%f", &raio);
	area = P * raio * raio;
	printf ("Area do circulo: %.2f\n", area);
	
	return 0;
}