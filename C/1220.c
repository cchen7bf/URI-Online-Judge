/*
Alguns estudantes são membros de um clube que viaja anualmente para locais exóticos. Os seus destinos no passado incluíram Indianapolis, Phoenix, Nashville, Filadélfia, San Jose, e Atlanta. Nesta primavera eles estão planejando uma viagem para Eindhoven. O grupo concorda com antecedência em dividir as despesas de forma igual, mas não é prático ficar fazendo acerto a cada despesa nova que ocorre. Assim, cada indivíduo do grupo paga por coisas específicas, como refeições, hotéis, passeios de táxi, bilhetes de avião, etc. Após a viagem, as despesas de cada aluno são computados e dinheiro é trocado de modo a que o custo final para cada um deles é o mesmo, com diferença de no máximo um centavo. No passado, esta troca de dinheiro tem sido tediosa e demorada. Seu trabalho é calcular, a partir de uma lista de despesas,a quantidade mínima de dinheiro que tem de mudar de mãos, a fim de equalizar (dentro de um centavo) os custos de todos os estudantes.

Entrada
A entrada contém a informação de diversas viagens. A informação de cada viagem consiste de uma linha contendo um inteiro positivo n (1 ≤ n ≤ 1000) indicando o número de alunos na viagem, seguida por n linhas de entrada, cada uma contendo a quantidade em dólares e centavos, gastos por cada um dos estudantes. Nenhum estudante gastou mais de R$ 10.000,00.

Uma única linha contendo 0 vem logo após a última viagem e determina o fim da entrada.

Saída
Para cada viagem, imprima uma linha com a quantidade de dinheiro (em dólares e centavos), que deve ser trocada para equalizar os custos dos estudantes.
*/
#include <stdio.h>
#include <math.h>
int main() {
    int n, i, total=0, media, diferenca=0;
    double entrada, resultado;
    scanf("%d", &n);
        while (n!=0) {
            int gastosint[n];
            for (i=0; i<n; i++) {
                scanf("%lf", &entrada);
                gastosint[i]=entrada*1000;
                total+=gastosint[i];
            }
            media=total/n;
            for (i=0; i<n; i++) 
                if (gastosint[i]>media)
                    diferenca=(gastosint[i]-media)+diferenca;
            resultado=round(diferenca/1000.0);
            printf("$%.2lf\n", resultado);
            diferenca=0;
            total=0;
            scanf("%d", &n);
        }
    return 0;
}
