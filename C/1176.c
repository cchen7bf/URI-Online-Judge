#include <stdio.h>
#include <stdlib.h>
int main() {
    long long int *fib;    
    int i, j, n, x, cont=0;
    fib=NULL;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &x);
        for (j=0; j<=x; j++) {
            cont++;
            fib=realloc(fib, sizeof(long long int)*cont);
            if (j==0) fib[0]=0;
            else if (j==1) fib[1]=1;
            else fib[j]=fib[j-2]+fib[j-1];
            if (x==j) printf("Fib(%d) = %lld\n", j, fib[j]);
        }
        cont=0;
        
    }
    free(fib);
    return 0;
}
