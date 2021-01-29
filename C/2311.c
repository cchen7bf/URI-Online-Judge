#include <stdio.h>
int main() {
    int n, i, j, k, m;
    double notas[7], fator, aux;
    
    scanf("%d", &n);
    char nome[n][50];
    double nf[n];

    for (i=0; i<n;i++) {
            scanf("%s", nome[i]);
            scanf("%lf", &fator);
            for (j=0; j<7; j++) {
                scanf("%lf", &notas[j]);
            }
            for (k=0; k<7;k++) {
                for (m=k; m<7; m++) {
                    if (notas[k]>notas[m]) {
                        aux=notas[k];
                        notas[k]=notas[m];
                        notas[m]=aux;
                    }
                }
            }
            
            nf[i]=(notas[1]+notas[2]+notas[3]+notas[4]+notas[5])*fator;
    }
    for (j=0; j<n; j++) {
        printf("%s %.2lf\n", nome[j], nf[j]);
    }        
    return 0;
}
