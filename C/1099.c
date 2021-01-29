/*
Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre X e Y.

Entrada
A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.

Saída
Imprima a soma de todos valores ímpares entre X e Y.
*/
#include <stdio.h>
int main() {
    int n, i, j, menor, maior, total=0, x, y;

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d %d", &x, &y);
        menor=x;
        if (y<menor) {
            menor=y;
            maior=x;
        } else maior=y;
        for (j=menor+1; j<maior; j++) {
            if (j%2!=0) total+=j;
        }
        printf("%d\n", total);
        total=0;
    }
    
    return 0;
}
