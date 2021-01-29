#include <stdio.h>
int main() {
    int n, i=0;

    scanf("%d", &n);
    i=n;
    while (n!=1) {
        
        i=i*(n-1);
        n-=1;
    }
    printf("%d\n", i);
    return 0;
}
