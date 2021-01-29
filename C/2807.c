#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, *sequencia, i;
    scanf("%d", &n);
    sequencia=malloc(sizeof(int)*n);

    for (i=n-1; i>=0; i--) {
        if (i==n-1) sequencia[i]=1;
        else if (i==n-2) sequencia[i]=1;
        else {
            sequencia[i]=sequencia[i+1]+sequencia[i+2];
        }
    }
    for (i=0; i<n; i++) {
        printf("%d", sequencia[i]);
        if (i!=n-1) printf(" ");
    }
    printf("\n");
    free(sequencia);
    return 0;
}
