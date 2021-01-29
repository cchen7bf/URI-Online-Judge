/*
Para aquecer você para esta competição, vamos pedir que você desenvolva um programa que calcule o quociente e o resto da divisão de dois números inteiros, pode ser? Lembre que o quociente e o resto da divisão de um inteiro a por um inteiro não-nulo b são respectivamente os únicos inteiros q e r tais que 0 ≤ r < |b| e:

a = b × q + r

Caso você não saiba, o teorema que garante a existência e a unicidade dos inteiros q e r é conhecido como ‘Teorema da Divisão Euclidiana’ ou ‘Algoritmo da Divisão’.

Entrada
A entrada é composta por dois números inteiros a e b (-1.000 ≤ a, b < 1.000).

Saída
Imprima o quociente q seguido pelo resto r da divisão de a por b.
*/
#include <stdio.h>
int main() {
    int x, y, quociente=0, resto=0, i, multi=1, aux=0, cont=1;

    scanf("%d %d", &x, &y);
    if (x>0 && y>0) {
        while (aux<x) {
            quociente++;
            aux+=y;
        }
        if (aux>x) quociente-=1;
        resto=x-(y*quociente);
    }
    else if (y<0 && x>0) {
        multi=(-1);
        y*=-1;

        while (aux<x) {
            quociente++;
            aux+=y;
        }
        if (aux>x) quociente-=1;
        quociente*=multi;
        y*=-1;
        resto=x-(y*quociente);
        }

    else if (x<0 && y>0) {
        multi=(-1);
        x*=-1;

        while (aux<x) {
            quociente++;
            aux+=y;
        }

        quociente*=multi;

        x*=-1;
        resto=x-(y*quociente);
        }

    else if (x<0 && y<0) {
        multi=(-1);
        x*=-1;
        y*=-1;

        while (aux<x) {
            quociente++;
            aux+=y;
        }

        quociente*=multi;

        x*=-1;
        resto=x-(y*quociente);
        quociente*=-1;
        }
    printf("%d %d\n", quociente, resto);

    return 0;
}
