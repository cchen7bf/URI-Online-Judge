#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, *sequencia, ordem=0, resp;

    scanf("%d", &n);
    sequencia=malloc(sizeof(int)*n);
    for (i=0; i<n; i++){
        scanf("%d", &sequencia[i]);
    }
    if (sequencia[0]>sequencia[1]) ordem=1;

    if (ordem==1) {
        for (i=1; i<n; i+=2) {
            if (sequencia[i]>=sequencia[i+1]){
                resp=0;
                printf("ok1\n");
                break;
            } else if (i+2<n && sequencia[i+1]<=sequencia[i+2]){
                resp=0;
                printf("ok2\n");
                break;
            } else resp=1;
        }
    }
    else if (ordem==0) {
        for (i=1; i<n; i+=2) {
            if (sequencia[i]<=sequencia[i+1]){
                resp=0;
                printf("ok1\n");
                break;
            } else if (i+2<n && sequencia[i+1]>=sequencia[i+2]){
                resp=0;
                printf("ok2\n");
                break;
            } else resp=1;
        }
    }
    printf("%d\n", resp);
    free(sequencia);
    return 0;
}
