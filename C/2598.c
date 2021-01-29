#include <stdio.h>
int main() {
    int n, i, radar, distancia, qtd;

    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf("%d %d", &distancia, &radar);
        qtd=distancia/radar;
        if (qtd*radar<distancia) qtd++;
        printf("%d\n", qtd);
    }
    return 0;
}
