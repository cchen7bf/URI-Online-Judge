#include <stdio.h>
int main() {
    double raiz(double x);
    double x, resultado;

    scanf("%lf", &x);
    resultado=raiz(x);
    printf("%.10lf\n", 1+resultado);

    return 0;
}

double raiz(double x){
    double resultado, i;
    if (x==0) resultado=0.0;
    else if (x==1) resultado=0.5;
    else {
        resultado=raiz(1.0/2.0+(x-1.0));
        }
    return resultado;
}
