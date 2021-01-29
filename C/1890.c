#include <stdio.h>
int main() {
    int n, i, j, k, x, y;
    long long int respx=1, respy=1;

    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        for (j=0; j<x; j++){
            respx*=26;
        }
        for (k=0; k<y; k++){
            respx*=10;
        }
        if (x==0 && y==0) {
            respx=0;
            respy=0;
        }
        printf("%lld\n", respx*respy);
        respx=1;
        respy=1;

    }
    return 0;
}
