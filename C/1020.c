/*
Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.

Entrada
O arquivo de entrada contém um valor inteiro.

Saída
Imprima a saída conforme exemplo fornecido.
*/
#include <stdio.h>
int main() {
    int n, canos=0, cmeses=0;
    scanf("%d", &n);
    while (n>=365) {
    n-=365;
    canos++;
    }
    while (n>=30) {
    n -=30;
    cmeses++;
    }
    printf("%d ano(s)\n", canos);
    printf("%d mes(es)\n", cmeses);
    printf("%d dia(s)\n", n);
    return 0;
}
