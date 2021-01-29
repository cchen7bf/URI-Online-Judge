#include <stdio.h>
#include <math.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    int matriz[n][n];

    while (n!=0){
        for (i=0; i<n; i++){
            for (j=0; j<n; j++){
                if (j==0) matriz[i][j]=pow(2,i);
                else matriz[i][j]=matriz[i][j-1]*2;

            }
        for (i=0; i<n; i++){
            for (j=0; j<n; j++){
                printf("%d", matriz[i][j]);
                if (j==n-1) printf("\n");
                else printf(" ");
            }
        }
        }
        scanf("%d", &n);

    }

    return 0;
}
