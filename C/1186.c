#include <stdio.h>
int main() {
    int i, j;
    double m[12][12], soma=0.0;
    char n;
    
   
    scanf("%c", &n);

    for (i=0; i<12; i++) {
        for (j=0; j<12;j++) {

            scanf("%lf", &m[i][j]);
        }
    }

    for (i=0; i<12; i++) {
        for (j=12-i; j<12; j++) {
           soma+=m[i][j];
        }
    }
    if (n==83) printf("%.1lf\n", soma);
    else printf("%.1lf\n", soma/66);

    return 0;
}
