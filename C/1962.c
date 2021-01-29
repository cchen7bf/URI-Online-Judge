#include <stdio.h>
int main() {
    int n, i, x;
    char ac[5]={"A.C."}, dc[5]={"D.C."};
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &x);
        if (x>2015) printf("%d %s\n", (-1)*(2015-x-1), ac);
        else if (x==2015) printf("%d %s\n", (2015-x+1), ac);
        else printf("%d %s\n", 2015-x, dc);
    }
    return 0;
}
