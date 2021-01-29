/*
Escreva um programa que leia um valor inteiro N. Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.

Entrada
O arquivo de entrada contém um número inteiro positivo N.

Saída
Imprima a saída conforme o exemplo fornecido.
*/
#include <stdio.h>
int main() {
    int n, i, cont=0, pum=0;
    scanf("%d", &n);
    for (i=0; i<n*4; i++) {
        cont++;
        pum++;
        if (pum==4) {
            printf("PUM\n");
            pum=0;
        } else {
        printf("%d ", cont);
        }
    }
    return 0;
}
