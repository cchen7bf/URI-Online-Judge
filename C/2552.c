#include <stdio.h>
#include <stdlib.h>

int main() {

    int m, n, i, j, k, x, cont=0, *resp;

    while (scanf("%d %d", &m, &n)!=EOF){
        int matriz[m][n];
        resp=malloc(sizeof(int)*n);
        for (i=0; i<m; i++){
            for (j=0; j<n; j++){
                scanf("%d", &matriz[i][j]);
            }
        }

        for (i=0; i<m; i++) {
            for (j=0; j<n; j++) {
                if (i==0 && j==0) {
                    if (matriz[i][j]==0) {
                        if(matriz[i][j+1]==1) cont++;
                        if(matriz[i+1][j]==1) cont++;
                        resp[j]=cont;
                        cont=0;
                    }
                    else resp[j]=9;
                }
            
                else if (i==0 && j!=0 && j!=n-1) {
                    if (matriz[i][j]==0) {
                        if(matriz[i][j+1]==1) cont++;
                        if(matriz[i+1][j]==1) cont++;
                        if(matriz[i][j-1]==1) cont++;
                        resp[j]=cont;
                        cont=0;
                    }
                    else resp[j]=9;
                }
                else if (j==0 && i!=0 && i!=m-1) {
                    if (matriz[i][j]==0) {
                        if(matriz[i][j+1]==1) cont++;
                        if(matriz[i+1][j]==1) cont++;
                        if(matriz[i-1][j]==1) cont++;
                        resp[j]=cont;
                        cont=0;
                    }
                    else resp[j]=9;
                }
                else if (i==0 && j==n-1) {
                    if (matriz[i][j]==0) {
                        if(matriz[i][j-1]==1) cont++;
                        if(matriz[i+1][j]==1) cont++;
                        resp[j]=cont;
                        cont=0;
                    }
                    else resp[j]=9;
                }
                else if (i==m-1 && j==n-1) {
                    if (matriz[i][j]==0) {
                        if(matriz[i][j-1]==1) cont++;
                        if(matriz[i-1][j]==1) cont++;
                        resp[j]=cont;
                        cont=0;
                    }
                    else resp[j]=9;
                }
                else if (j==n-1) {
                    if (matriz[i][j]==0) {
                        if(matriz[i][j-1]==1) cont++;
                        if(matriz[i+1][j]==1) cont++;
                        if(matriz[i-1][j]==1) cont++;
                        resp[j]=cont;
                        cont=0;
                    }
                    else resp[j]=9;
                }

                else if (i==m-1) {
                    if (matriz[i][j]==0) {
                        if(matriz[i][j-1]==1) cont++;
                        if(matriz[i][j+1]==1) cont++;
                        if(matriz[i-1][j]==1) cont++;
                        resp[j]=cont;
                        cont=0;
                    }
                    else resp[j]=9;
                }
                else if (i!=0 && i!=m-1 && j!=0 && j!=n-1){
                    if (matriz[i][j]==0) {
                        if(matriz[i][j-1]==1) cont++;
                        if(matriz[i][j+1]==1) cont++;
                        if(matriz[i+1][j]==1) cont++;
                        if(matriz[i-1][j]==1) cont++;
                        resp[j]=cont;
                        cont=0;
                    }
                    else resp[j]=9;
                }
                if (j==n-1){
                    for (k=0; k<n; k++){
                        printf("%d", resp[k]);
                    }
                    printf("\n");
                }


            }


        }

        free(resp);

    }

    return 0;
}
