#include <stdio.h>
int main() {
    int e, d;
    scanf("%d %d", &e, &d);
    if ((e+3)<=d) {
        printf("Muito bem! Apresenta antes do Natal!\n");
    }
    else if (d<e) printf("Eu odeio a professora!\n");
    else {
        printf("Parece o trabalho do meu filho!\n");
        if ((e+2)<24) printf("TCC Apresentado!\n");
        else printf("Fail! Entao eh nataaaaal!\n");
    }
    return 0;
}
