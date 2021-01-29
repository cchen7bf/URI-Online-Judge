#include <stdio.h>
int main() {
    int n, x, i;
    char letra[26];

    while (scanf("%s", letra)!=EOF) {
        scanf("%d", &n);
        for (i=0; i<n; i++) {
            scanf("%d", &x);
            printf("%c", letra[x-1]);
        }
        printf("\n");
    }
    return 0;
}
