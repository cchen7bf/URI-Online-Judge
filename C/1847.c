#include <stdio.h>
int main() {
    int a, b, c;
    double div1, div2;
    scanf("%d %d %d", &a, &b, &c);
    div1=b-(a-b); //esfria
    div2=(b-a)+b; //esquenta
    if (b<a && c>=b) printf(":)\n");
    else if (b>a && c<=b) printf(":(\n");
    else if (b>a && c>b && div2>c) printf(":(\n"); //esquenta
    else if (b>a && c>b && div2<=c) printf(":)\n");
    else if (b<a && c<b && div1>=c) printf(":(\n"); //esfria
    else if (b<a && c<b && div1<c) printf(":)\n");
    else if (b==a && c>b) printf(":)\n");
    else if (b==a && c<b) printf(":(\n");
    else if (b==a && c==b) printf(":(\n");
    return 0;
}
