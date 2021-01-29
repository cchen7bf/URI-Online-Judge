#include <stdio.h>
int main() {
    int n, i, x, total=0, anterior=0;
    scanf("%d", &n);
    while (n!=0){
        for (i=0; i<n; i++){
            scanf("%d", &x);
            if (anterior==0) {
                total+=10;
                anterior=x;
            }
            else if (anterior+10>=x){
                total+=x-anterior;
                anterior=x;
            }
            else{
                total+=10;
                anterior=x;
            }
        }
        printf("%d\n", total);
        total=0;
        anterior=0;
        scanf("%d", &n);
    }

    return 0;
}
