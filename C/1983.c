#include <stdio.h>
int main() {
    int n, i, matricula, maior=0;
    double nota, mnota=0;

    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf("%d %lf", &matricula, &nota);
        if (mnota==0 && nota>=8) {
            maior=matricula;
            mnota=nota;
        }
        else if (mnota!=0 && nota>mnota) {
            maior=matricula;
            mnota=nota;
        }
    }
    if (maior!=0) printf("%d\n", maior);
    else printf("Minimum note not reached\n");
    return 0;
}
