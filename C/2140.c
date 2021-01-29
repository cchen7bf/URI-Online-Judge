#include <stdio.h>
int main() {
    int n, m, i, j, m1[7]={2,5,10,20,50,100}, troco, resp=0;

    scanf("%d %d", &n, &m);
    
    while (n!=0 && m!=0) {
    troco=m-n;
        for (i=0; i<6; i++){
            for (j=i; j<6; j++){
                if (troco==m1[i]+m1[j]) {
                    resp=1;
                    break;
                }      
            }
        }
        if (resp==1) printf("possible\n");
        else printf("impossible\n");
        resp=0;
        scanf("%d %d", &n, &m);
    }
    return 0;
}
