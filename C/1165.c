#include <stdio.h>
int main() {
    int i, j, n, x, cont=0;
    scanf("%d", &n);
    for (i=0; i<n;i++) {
        scanf("%d", &x);
        for (j=2; j<x; j++) {
            if (x%j==0) {
                cont++;
                break;
            }
        }
        if (cont==0) printf("%d eh primo\n", x);
        else printf("%d nao eh primo\n", x);
        cont=0;
    }
    return 0;
}
