#include <stdio.h>
#include <math.h>
int main() {
    int n, i, j, resp, dois=2;
    scanf("%d", &n);
    while (n!=0){
        for (i=0; i<n; i++){
            for (j=0; j<n; j++){
                resp=fabs(i-j)+1;
                if (resp==0) printf("%3d", dois);
                else printf("%3d", resp);
                if (j==n-1) printf("\n");
                else printf(" ");
            }

        }
        printf("\n");
        scanf("%d", &n);
    }
    return 0;
}
