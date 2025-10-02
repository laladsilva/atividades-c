/*4) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba o salário de 
um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um 
aumento de 25%.*/

#include <stdio.h>
int main () {
float sal, novo_sal;
printf ("Insira o salario:\n");
scanf ("%f", &sal);
novo_sal = sal + sal * (25.0/100.0);
 printf("Novo Salario: %.2f\n", novo_sal);

return 0;
}