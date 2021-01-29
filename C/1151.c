#include <stdio.h>
int main() {
    int i, n, atual=0, anterior=0, aux, soma;
    scanf("%d", &n);

    for (i=0; i<n; i++) {
        soma=atual+anterior;
        printf("%d", soma);
        if (i!=n-1) printf(" ");
        if (i>1) {
            aux=atual;
            atual = atual+anterior;
            anterior = aux;
                    
        }
        if (atual==0) atual=1;
        
    }
    printf("\n");
    return 0;
}
