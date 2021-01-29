#include <stdio.h>
int main() {
    int x, i, j;
    double m[12][12], soma=0.0;
    char n;
    
   
    scanf("%d %c", &x, &n);

    for (i=0; i<12; i++) {
        for (j=0; j<12;j++) {

            scanf("%lf", &m[i][j]);
        }
    }

    for (i=0; i<12; i++) {
        soma+=m[x][i];

    }
    if (n==83) printf("%.1lf\n", soma);
    else printf("%.1lf\n", soma/12);

    return 0;
}
