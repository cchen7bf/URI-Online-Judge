#include <stdio.h>
#include <stdlib.h>
int main() {

    int i, j, n, *x, tam, aux, pos;
    while ((scanf("%d %d", &tam, &n))!=EOF) {
        x=malloc(sizeof(int)*tam);
        for (i=0; i<tam; i++) {
            scanf("%d", &x[i]);
        }
        for (i=0; i<tam; i++){
            for (j=i; j<tam; j++){
                if (x[j]>x[i]) {
                    aux=x[i];
                    x[i]=x[j];
                    x[j]=aux;
                }
            }
        }

        for (i=0; i<n; i++){
            scanf("%d", &pos);
            printf("%d\n", x[pos-1]);
        }
        free(x);
    }
    return 0;
}
