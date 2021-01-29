#include <stdio.h>
int main() {
    int n, i, menor, posicao;
    scanf("%d", &n);
    int x[n];

    scanf("%d", &x[0]);    
    menor=x[0];
    for (i=1;i<n;i++){
        scanf("%d", &x[i]);
        if (x[i]<menor) {
            menor=x[i];
            posicao=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
    return 0;
}
