#include <stdio.h>
int main() {
    int n, i, p, x, atual, resultado=1;

    scanf("%d %d", &p, &n);
    for (i=0; i<n; i++) {
        scanf("%d", &x);
        if (i==0) atual=x;
        else if (atual+p<x) {
            resultado=0;
            break;
        }
        else if (atual-p>x) {
            resultado=0;
            break;
        }
        else atual=x;
    }
    if (resultado==1) printf("YOU WIN\n");
    else printf("GAME OVER\n");


    return 0;
}
