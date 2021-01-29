#include <stdio.h>
int main() {
    int n, max, min, i, x, cont=0;

    while (scanf("%d %d %d", &n, &min, &max)!=EOF) {
        for (i=0; i<n; i++) {
            scanf("%d", &x);
            if (x>=min && x<=max) cont++;
        }
        printf("%d\n", cont);
        cont=0;
    }

    return 0;
}
