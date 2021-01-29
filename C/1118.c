#include <stdio.h>
int main() {
    double x, y, media;
    int n=1;

    while (n==1) {
        scanf("%lf", &x);
        while (x<0 || x>10) {
            printf("nota invalida\n");
            scanf("%lf", &x);
        }

        scanf("%lf", &y);
        while (y<0 || y>10) {
            printf("nota invalida\n");
            scanf("%lf", &y);
        }
        printf("media = %.2lf\n", (x+y)/2);
        n=0;
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &n);
        while (n!=1 && n!=2) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &n);
        }
    }
    return 0;
}
