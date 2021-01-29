#include <stdio.h>
int main() {
    int n, i, x, y, dia=1, primeiro=0;
    double melhor=0.0;

    while ((scanf("%d", &n)!=EOF)) {
        for (i=1; i<=n; i++) {
            scanf("%d %d", &x, &y);
            if (melhor==0.0) melhor=(x*1.0/y);
            if (melhor>(x*1.0/y)) {
                melhor=(x*1.0/y);
                dia=i;
            }
        }
        if (primeiro==0) {
            printf("1\n");
            primeiro=1;
        }
        printf("%d\n", dia);
        dia=1;
        melhor=0.0;
    }
    return 0;
}
