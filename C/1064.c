/*
Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

Entrada
A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes números será positivo.

Saída
O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.
*/
#include <stdio.h>
int main() {
    int i, cont=0;
    double n, media, soma=0;

    for (i=0; i<6; i++) {
        scanf("%lf", &n);
        if (n>0) {
            cont++;
            soma+=n;
        }
    }
    media=soma/cont;
    printf("%d valores positivos\n", cont);
    printf("%.1lf\n", media);
    return 0;
}
