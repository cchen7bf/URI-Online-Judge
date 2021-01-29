#include <stdio.h>
int main() {
    int n, i, nota, carga, soman=0, somac=0;

    while (scanf("%d", &n)!=EOF) {
        for (i=0; i<n; i++) {
            scanf("%d %d", &nota, &carga);
            soman+=nota*carga;
            somac+=carga;

        }
        printf("%.4lf\n", (soman)/(somac*100.0));
        soman=0;
        somac=0;
    }
    return 0;
}
