/*
Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.


*/
#include <stdio.h>
int main() {
    int i, j, a[3], b[3], temp;

    for (i=0; i<3; i++) {
        scanf("%d", &a[i]);
        b[i]=a[i];
    }

    for (i=0; i<3; i++) {
        for (j=i+1; j<3; j++) {
            if (a[i]>a[j]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (i=0; i<3; i++) 
        printf("%d\n", a[i]);

    printf("\n");

    for (i=0; i<3; i++) 
        printf("%d\n", b[i]);

    return 0;
}
