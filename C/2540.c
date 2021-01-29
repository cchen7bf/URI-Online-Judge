#include <stdio.h>
int main() {
    int n, i, x;
    double voto=(100.0/3)*2, cont=0.0, porc;

    while(scanf("%d", &n)!=EOF) {
        for(i=0; i<n; i++) {
            scanf("%d", &x); 
            if (x==1) cont++;
        }
        porc=(100*cont)/n;
        if (porc>=voto) printf("impeachment\n");
        else printf("acusacao arquivada\n");
        cont=0;
    }
    return 0;
}
