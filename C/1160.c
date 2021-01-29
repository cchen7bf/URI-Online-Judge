#include <stdio.h>
int main() {
    int pa, pb, n, i, anos=0;
    double ga, gb;

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);
        while (pa<=pb) {
            pa*=(ga/100+1);
            pb*=(gb/100+1);
            anos++;
            if (anos>100) break;
        }
    if (anos>100) printf("Mais de 1 seculo.\n");
    else printf("%d anos.\n", anos);
    anos=0;
    }
    return 0;
}
