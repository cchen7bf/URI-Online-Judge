#include <stdio.h>
int main() {
    double n, imposto;
    scanf("%lf", &n);
    if (n>4500) imposto=(n-4500)*0.28 + 1500*0.18 + 1000*0.08;
    else if (n<=4500 && n>=3000.01) imposto=((n-3000)*0.18 + 1000*0.08);
    else if (n<=3000 && n>=2000.01) imposto=(n-2000)*0.08;
    else if (n<=2000) imposto=0;

    if (imposto!=0.0) printf("R$ %.2lf\n", imposto);
    else printf("Isento\n");
    return 0;
}
