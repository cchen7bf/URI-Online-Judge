/*
Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.
*/
#include <stdio.h>
int main() {
    double n;
    int c100=0, c50=0, c20=0, c10=0, c5=0, c2=0, c1=0, c050=0, c025=0, c010=0, c005=0, c001=0, inteiro;
    scanf("%lf", &n);
    inteiro=n*100;
    while (inteiro>=10000) {
    inteiro-=10000;
    c100++;
    }
    while (inteiro>=5000) {
    inteiro-=5000;
    c50++;
    }
    while (inteiro>=2000) {
    inteiro-=2000;
    c20++;
    }
    while (inteiro>=1000) {
    inteiro-=1000;
    c10++;
    }
    while (inteiro>=500) {
    inteiro-=500;
    c5++;
    }
    while (inteiro>=200) {
    inteiro-=200;
    c2++;
    }
    while (inteiro>=100) {
    inteiro-=100;
    c1++;
    }
    while (inteiro>=50) {
    inteiro-=50;
    c050++;    
    }
    while (inteiro>=25) {
    inteiro-=25;
    c025++;    
    }
    while (inteiro>=10) {
    inteiro-=10;
    c010++;    
    }
    while (inteiro>=5) {
    inteiro-=5;
    c005++;    
    }
    
    while (inteiro>=1) {
    inteiro-=1;
    c001++;    
    }
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", c100);
    printf("%d nota(s) de R$ 50.00\n", c50);
    printf("%d nota(s) de R$ 20.00\n", c20);
    printf("%d nota(s) de R$ 10.00\n", c10);
    printf("%d nota(s) de R$ 5.00\n", c5);
    printf("%d nota(s) de R$ 2.00\n", c2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", c1);
    printf("%d moeda(s) de R$ 0.50\n", c050);
    printf("%d moeda(s) de R$ 0.25\n", c025);
    printf("%d moeda(s) de R$ 0.10\n", c010);
    printf("%d moeda(s) de R$ 0.05\n", c005);
    printf("%d moeda(s) de R$ 0.01\n", c001);
   return 0;
}
