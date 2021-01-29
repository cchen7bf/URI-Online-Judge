#include <stdio.h>
int main() {

    int i, n, cod, cod2, x, tot=0;

    while (scanf("%d %d", &n, &cod)!= EOF) {
        for (i=0; i<n; i++){
            scanf("%d %d", &cod2, &x);
                if (cod2==cod && x==0) tot++;
        }
        printf("%d\n", tot);
        tot=0;
    }
    return 0;
}
