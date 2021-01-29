#include <stdio.h>
int main() {
    int x, y, z, total;

    scanf("%d %d %d", &x, &y, &z);
    total=x+y+z;
    if (total==24) printf("0\n");
    else if (total>24) printf("%d\n", total-24);
    else if (total<0) printf("%d\n", 24+total);
    else printf("%d\n", total);


    return 0;
}
