/*
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.
*/
#include <stdio.h>
int main() {
    int n, c100=0, c50=0, c20=0, c10=0, c5=0, c2=0, c1=0, copia;
    scanf("%d", &n);
    copia=n;
    while (n>=100) {
    n=n-100;
    c100++;
    }
    while (n>=50) {
    n=n-50;
    c50++;
    }
    while (n>=20) {
    n=n-20;
    c20++;
    }
    while (n>=10) {
    n=n-10;
    c10++;
    }
    while (n>=5) {
    n=n-5;
    c5++;
    }
    while (n>=2) {
    n=n-2;
    c2++;
    }
    while (n>=1) {
    n=n-1;
    c1++;
    }
    printf("%d\n",copia);
    printf("%d nota(s) de R$ 100,00\n", c100);
    printf("%d nota(s) de R$ 50,00\n", c50);
    printf("%d nota(s) de R$ 20,00\n", c20);
    printf("%d nota(s) de R$ 10,00\n", c10);
    printf("%d nota(s) de R$ 5,00\n", c5);
    printf("%d nota(s) de R$ 2,00\n", c2);
    printf("%d nota(s) de R$ 1,00\n", c1);

    return 0;
}
