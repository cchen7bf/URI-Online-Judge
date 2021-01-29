#include <stdio.h>
int main() {
    int n, x, y, i, j, k, cont=0, soma=0;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d %d", &x, &y);
            j=x;
            while (cont!=y) {
                if (j%2!=0) {
                cont++;
                soma+=j;
            }
            j++;
            }
    printf("%d\n", soma);
    soma=0;
    cont=0;
    }
    return 0;
}
