#include <stdio.h>
int main() {
    int n, i, x, aux=0;
    scanf("%d", &n);
    scanf("%d", &aux);
    for (i=2; i<=n; i++){
        scanf("%d", &x);
        if (x<aux) {
            printf("%d\n", i);
            break;
        }
        else aux=x;
     }
    if (x>=aux) printf("0\n");
    return 0;
}
