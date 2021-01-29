/*
Sabe-se que 90% dos calouros tem sempre a expectativa de serem acima da média no início de suas graduações. Você deve checar a realidade para ver se isso procede.



Entrada
A entrada contém muitos casos de teste. A primeira linha da entrada contém um inteiro C, indicando o número de casos de teste. Seguem C casos de teste ou instâncias. Cada caso de teste inicia com um inteiro N, que é o número de pessoas de uma turma (1 ≤ N ≤ 1000). Seguem N inteiros, separados por espaços, cada um indicando a média final (um inteiro entre 0 e 100) de cada um dos estudantes desta turma.

Saída
Para cada caso de teste imprima uma linha dando o percentual de estudantes que estão acima da média da turma, com o valor arredondado e com 3 casas decimais.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int c, n, i, j, *notas, soma=0;
    double media, acima=0;

    scanf("%d", &c);
    for (i=0; i<c; i++) {
        scanf("%d", &n); 
        notas=malloc(sizeof(int)*n);
            for (j=0; j<n; j++) {
                scanf("%d", &notas[j]);
                soma+=notas[j];
            }
            media=soma/(n);
            for (j=0; j<n; j++) {
                if (notas[j]>media) acima++;
            }
            free(notas);
            printf("%.3lf%%\n", (100*acima)/n);
            soma=0;
            acima=0;            
    }
    return 0;
}
