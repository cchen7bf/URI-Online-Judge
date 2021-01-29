#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, *x, menor, pos=1;
    scanf("%d", &n);
    x=malloc(sizeof(int)*n);
    for (i=0; i<n; i++) {
        scanf("%d", &x[i]);
        if (i==0) menor=x[i];
        else if (x[i]<menor) {
            menor=x[i];
            pos=i+1;
        }
    }
    printf("%d\n", pos);
    free(x);
    return 0;
}
