#include <stdio.h>
int main() {

    int cont, i=0, j=2, x=0, n, r=0, p1=1, p2=1, p3;

    scanf("%d", &n);
    while (i<=n) {
        p3=p2+p1;
        p1=p2;
        p2=p3;
        while (r!=1) {
            if (j!=p3) {
                x=j;
                i++;
                r=1;
                j++;
            }
            else {
                j++;
                p3=p2+p1;
                p1=p2;
                p2=p3;
            }
        }
        r=0;

    }
    printf("%d\n", x);
    return 0;
}
