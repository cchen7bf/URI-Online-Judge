#include <stdio.h>
#include <stdlib.h>
int main() {

    int n, m, i, j, *x, aux, cont, para=0, qtd;
    scanf("%d", &n);
    scanf("%d", &m);
    qtd=m;
    cont=m;
    x=malloc(sizeof(int)*n);
    for (i=0; i<n; i++){
        scanf("%d", &x[i]);
    }
    for (i=0; i<n; i++){
        for (j=i; j<n; j++){
            if (x[j]>x[i]) {
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;
            }
        }
    }
    while (para==0) {
        if (x[cont]!=x[cont-1]) {
            para++;

        }
        else { 
            cont++;
            qtd++;
        }
    }
    printf("%d\n", qtd);
    free(x);
    return 0;
}
