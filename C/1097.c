/*
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo
*/
#include <stdio.h>
int main () {
    int i, j;
    for (i=1;i<=9; i+=2) {
        for (j=6+i; j>=i+4; j--) {
            printf("I=%d J=%d\n", i, j);
        }
    }
    return 0;
}
