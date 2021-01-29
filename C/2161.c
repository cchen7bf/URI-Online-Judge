#include <stdio.h>
int main() {
    int n, i;
    double resp=3.0, fracao=1/6;

    scanf("%d", &n);
        for (i=0; i<n;i++){
            fracao=1.0/(6.0+fracao);
        }
        resp=3+fracao;
        printf("%.10lf\n", resp);
    return 0;
}
