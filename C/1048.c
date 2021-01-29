/*
A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:


Salário	Percentual de Reajuste
0 - 400.00
400.01 - 800.00
800.01 - 1200.00
1200.01 - 2000.00
Acima de 2000.00

15%
12%
10%
7%
4%

Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste e o percentual de reajuste ganho, conforme exemplo abaixo.
*/
#include <stdio.h>
int main() {
    double salario, reajuste;

    scanf("%lf", &salario);
    if (salario<=400) reajuste=1.15;
    else if (salario>400 && salario<=800) reajuste=1.12;
    else if (salario>800 && salario<=1200) reajuste=1.10;
    else if (salario>1200 && salario<=2000) reajuste=1.07;
    else if (salario>2000) reajuste=1.04;
    

    printf("Novo salario: %.2lf\n", salario*reajuste);
    printf("Reajuste ganho: %.2lf\n", salario*reajuste-salario);
    printf("Em percentual: %.0lf %%\n", (reajuste-1)*100);
    
    return 0;
}
