#include <stdio.h>
int main() {
    double volume, raio, area, altura;

    while (scanf("%lf %lf", &volume, &raio)!=EOF) {
        raio/=2;
        area=3.14*(raio*raio);
        altura=volume/area;
        printf("ALTURA = %.2lf\nAREA = %.2lf\n", altura, area);
    }
    return 0;
}
