#include <stdio.h>
int main() {
    int x, i=0;
    while (scanf("%d", &x)!=EOF) {
        while (x!=1) {
            x/=2;
            i++;
        }
        printf("%d\n", i);
        i=0;
    }

    return 0;
}

