#include<stdio.h>
int main() {
    int x, y;
    double resultado;

    scanf("%d %d", &x, &y);
    resultado=x*1.0/y;
    printf("%.2lf\n", resultado);
    return 0;
}
