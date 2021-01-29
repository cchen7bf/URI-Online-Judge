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
    double x,y;
    for (i=0;i<=20; i+=2) {
        for (j=10+i; j<=i+30; j+=10) {
            x=i/10.0;
            y=j/10.0;
            
            if (x==0 || x==1 || x==2) printf ("I=%.0lf J=%.0lf\n", x, y);
            else printf("I=%.1lf J=%.1lf\n", x, y);
        }
    }
    return 0;
}
