/*1) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba quatro 
números inteiros, calcule e mostre a soma desses números. */

/* RESPOSTA ERRADA #include <stdio.h>
int main ( ) {
    int i=1
    int l=2
    int k=3
    int j=4
}
printf ("i+j+k+l: %d.n")
}*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int n1, n2, n3, n4, s;

    printf("Informe quatro numeros em sequencia:\n");

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);

    s = n1 + n2 + n3 + n4;

    printf("Resultado da soma: %d\n", s);

    return 0;
}