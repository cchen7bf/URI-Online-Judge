#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, n, diferenca, soma=0;
    long long int x, rangel=0, gugu=0;

    while (scanf("%d", &n)!=EOF) {
        for (i=0; i<n; i++) {
            scanf("%lld", &x);
            soma+=x;
        }
        printf("%d\n", soma%2);
        soma=0;
    }
    return 0;
}
