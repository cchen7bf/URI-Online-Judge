#include <stdio.h>
int main() {
    int i, x, y, menor, maior;
    scanf("%d %d", &x, &y);
    menor=x;
    maior=y;
    if (menor>maior) {
    menor=y;
    maior=x;
    }
    for (i=menor+1; i<maior; i++) {
        if (i%5==2 || i%5==3) printf("%d\n", i);
    }
    return  0;
}
