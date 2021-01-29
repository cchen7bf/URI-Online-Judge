#include <stdio.h>
int main() {
    int n, i, x, y;
    double preco, total=0;

    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf("%d %d", &x, &y);
            if (x==1001) preco=1.5;
            else if (x==1002) preco=2.5;
            else if (x==1003) preco=3.5;
            else if (x==1004) preco=4.5;
            else if (x==1005) preco=5.5;
        total=preco*y+total;
    }
    printf("%.2lf\n", total);
    return 0;
}
