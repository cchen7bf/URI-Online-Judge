#include <stdio.h>
int main() {
    int n, k, i, j, matriz, resp;

    scanf("%d", &n);
    while (n!=0){
        matriz=n%2;
        if (matriz==0) resp=n/2;
        else resp=(n/2)+1;

        for (i=0; i<n; i++){
            for (j=0; j<n; j++){
                for (k=0; k<resp; k++){
                    if (i==0 || j==0 || i==n-1 || j==n-1) {
                        printf("%3d", k=1);
                        if (j==n-1) printf("\n");
                        else printf(" ");
                                    
                        break;
                    }
                    else if (i==k || j==k || i==n-k-1 || j==n-k-1) {
                        printf("%3d", k+1);
                        if (j==n-1) printf("\n");
                        else printf(" ");
            
                        break;

                    }

                }       
            }
                }
        printf("\n");
        scanf("%d", &n);
    }
    return 0;
}
