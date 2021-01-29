#include <stdio.h>
int main() {
    int n, i, j, tam;
    while (scanf("%d", &n)!=EOF){
        for (i=0; i<n; i++){
            for (j=0; j<n; j++){
                tam=n/3;
                if (i==(n/2) && j==(n/2)) printf("4");
                else if (i>=tam && j>=tam && i<=n-tam-1 && j<=n-tam-1) printf("1");
                else if (i==n-1-j) printf("3");
                else if (i==j) printf("2");
                else printf("0");
                if (j==n-1) printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
