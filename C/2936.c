#include <stdio.h>
int main() {
    int curupira=0, boitata=0, boto=0, mapi=0, iara=0, total;

    scanf("%d %d %d %d %d", &curupira, &boitata, &boto, &mapi, &iara);
    total =((300*curupira)+(1500*boitata)+(600*boto)+(1000*mapi)+(150*iara)+225);
    printf("%d\n", total);
    return 0;
}
