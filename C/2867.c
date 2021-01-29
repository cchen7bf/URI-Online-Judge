#include <stdio.h>
#include <math.h>
int main() {
    int n, i, x, y, cont=0;
    unsigned long long  resp;
    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        resp=(pow(x, y));
        printf("%llu\n", resp);
        while (resp>0) {
            resp/=10;
            cont++;

        }
        printf("%d\n", cont);
        cont=0;
    }
    return 0;
}
