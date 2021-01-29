/*
Um treinador de voleibol gostaria de manter estatísticas sobre sua equipe. A cada jogo, seu auxiliar anota quantas tentativas de saques, bloqueios e ataques cada um de seus jogadores fez, bem como quantos desses saques, bloqueios e ataques tiveram sucesso (resultaram em pontos). Seu programa deve mostrar qual o percentual de saques, bloqueios e ataques do time todo tiveram sucesso.

Entrada
A entrada é dada pelo número de jogadores N (1 ≤ N ≤ 100), seguido pelo nome de cada um dos jogadores. Abaixo do nome de cada jogador, seguem duas linhas com três inteiros cada. Na primeira linha S, B e A (0 ≤ S,B,A ≤ 10000) representam a quantidade de tentativas de saques, bloqueios e ataques e na segunda linha, S1, B1 e A1 (0 ≤ S1 ≤ S; 0 ≤ B1 ≤ B; 0 ≤ A1 ≤ A) com o número de saques, bloqueios e ataques deste jogador que tiveram sucesso.

Saída
A saída deve conter o percentual total de saques, bloqueios e ataques do time todo que resultaram em pontos, conforme mostrado no exemplo.
*/
#include <stdio.h>
int main() {
    char nome[100];
    int n, s1, s2, b1, b2, a1, a2, i; 
    double saquetotal=0, bloqueiototal=0, ataquetotal=0, saquesucesso=0, bloqueiosucesso=0, ataquesucesso=0;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%s", nome);
        scanf("%d %d %d", &s1, &b1, &a1);
        scanf("%d %d %d", &s2, &b2, &a2);
        saquetotal+=s1;
        bloqueiototal+=b1;
        ataquetotal+=a1;
        saquesucesso+=s2;
        bloqueiosucesso+=b2;
        ataquesucesso+=a2;
    }
    printf("Pontos de Saque: %.2lf %%.\n", (saquesucesso*100)/saquetotal);
    printf("Pontos de Bloqueio: %.2lf %%.\n", (bloqueiosucesso*100)/bloqueiototal);
    printf("Pontos de Ataque: %.2lf %%.\n", (ataquesucesso*100)/ataquetotal);
    return 0;
}
