#include <stdio.h>
#include <stdlib.h>
int main() {
    int x, n, y, *crescente, *decrescente, vezes, i, j, k, aux;
    scanf("%d", &y);
    for (k=0; k<y; k++){
        scanf("%d", &n);
        crescente=malloc(sizeof(int)*n);
        decrescente=malloc(sizeof(int)*n);

        for (i=0; i<n; i++){
            scanf("%d", &crescente[i]);
            decrescente[i]=crescente[i];
        }

        for (i=0; i<n; i++) {
            for (j=i; j<n; j++){
                if (crescente[i]>crescente[j]){
                    aux=crescente[i];
                    crescente[i]=crescente[j];
                    crescente[j]=aux;
                }
            }
        }

        for (i=0; i<n; i++){
            for (j=i; j<n; j++){
                if (decrescente[i]<decrescente[j]){
                    aux=decrescente[i];
                    decrescente[i]=decrescente[j];
                    decrescente[j]=aux;
                }
            }
        }

        while (crescente[i]!=decrescente[j]){
            for (i=0; i<n; i++) {
                printf("%d ", crescente[i]);
            }
        printf("\n");

    free(crescente);
    free(decrescente);  
    }  
    return 0;
}
