#include <stdio.h>
int main() {
    double n;
    int i, exp;

    scanf("%lf", &n);
    if (n<0) {
        for (i=0; n<1; i++) {
            n*=10;
        }
        exp=i*(-1);
    } else {
        for (i=0; n>9; i++) {
            n/=10;
        }
        exp=i;
    }
    printf("%.4lfE%d\n", n, exp);

    return 0;
}
