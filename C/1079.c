/*
Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal. Apresente a média ponderada para cada um destes conjuntos de 3 valores, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.

Entrada
O arquivo de entrada contém um valor inteiro N na primeira linha. Cada N linha a seguir contém um caso de teste com três valores com uma casa decimal cada valor.

Saída
Para cada caso de teste, imprima a média ponderada dos 3 valores, conforme exemplo abaixo.
*/
#include <stdio.h>
int main() {
    double a, b, c, media;
    int a2, b2, c2, n, i;

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%lf %lf %lf", &a, &b, &c);
        a2=a*100;
        b2=b*100;
        c2=c*100;
        media=(a2*2+b2*3+c2*5)/1000.0;
        printf("%.1lf\n", media);
    }

    return 0;
}
