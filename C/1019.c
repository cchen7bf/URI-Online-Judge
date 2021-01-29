/*
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.
*/
#include <stdio.h>
int main() {
    int n, horas=0, minutos=0;
    scanf("%d", &n);
    while (n>=3600) {
    n-=3600;
    horas++;
    }
    while (n>=60) {
    n-=60;
    minutos++;
    }
    printf("%d:%d:%d\n", horas, minutos, n);
    return 0;
}
