#include <stdio.h>
int main() {
    int x, y, maior;
    scanf("%d %d", &x, &y);
    if (x>y) maior=x;
    else maior=y;
    if (x==y) printf("%d\n", x);
    else printf("%d\n", maior);
    return 0; 
}
