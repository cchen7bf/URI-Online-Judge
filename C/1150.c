#include <stdio.h>
int main() {
    int x, y, i, j, cont=1;
    scanf("%d", &x);
    scanf("%d", &y);
    while (x>=y) {
        scanf("%d", &y);
    }

    for (i=x+1; x<y; i++) {
        x=x+i;
        cont++;
    }
    if (x==y) cont++;
    printf("%d\n", cont);
    return 0;
}
