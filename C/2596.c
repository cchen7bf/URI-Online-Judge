#include <stdio.h>
int main() {
    int n, i, j, soma=0, x, k, cont=0;

    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf("%d", &x);
        for (j=1; j<=x; j++){
            for (k=1; k<=j; k++){
                if (j%k==0) soma++;
            }
            if (soma%2==0) cont++;
            soma=0;
        }
        printf("%d\n", cont);
        cont=0;

    }
    return 0;
}
