/*Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.

Entrada
A entrada será um valor inteiro positivo.

Saída
A saída será uma sequência de seis números ímpares.
*/
#include <stdio.h>
int main() {
    int n, i=0, cont=0;
    scanf("%d", &n);
    while (cont!=6) {
        if ((n+i)%2!=0) { 
            printf("%d\n", n+i);
            cont++;
        }
        i++;
    }
    return 0;
}
