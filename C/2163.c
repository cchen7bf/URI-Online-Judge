#include <stdio.h>
int main() {
    int x, m, n, i, j, r1=0, r2=0;
    scanf("%d %d", &m, &n);
    int matriz[m][n];
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i=0; i<m; i++) {
        for (j=0; j<n; j++){
            if (matriz[i][j]==42 && matriz[i-1][j-1]==7 && matriz[i-1][j]==7 && matriz[i-1][j+1]==7
                    && matriz[i][j-1]==7 && matriz[i][j+1]==7
                    && matriz[i+1][j-1]==7 && matriz[i+1][j]==7 && matriz[i+1][j+1]==7) {
                r1=i+1;
                r2=j+1;
                }
                
            
        }
    }
    printf("%d %d\n", r1, r2);
    return 0;
}
