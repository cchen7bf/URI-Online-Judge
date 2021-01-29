#include <stdio.h>
int main() {
    int x, n, i, y, cont=0;
    scanf("%d %d", &x, &n);
    for (i=0; i<n; i++){
        scanf("%d", &y);
            if (x*y>=40000000) cont++;
    }
    printf("%d\n", cont);
    return 0;
}
