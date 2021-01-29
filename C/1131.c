#include <stdio.h>
int main() {
    int g, gremio=0, inter=0, empates=0, grenais=0, a, b;


    do {
        grenais+=1;
        scanf("%d %d", &a, &b);
        if  (a>b) inter+=1;
        else if (a<b) gremio+=1;
        else empates+=1;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &g);
        } while (g==1);

    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", grenais, inter, gremio, empates);
    if (a>b) printf("Inter venceu mais\n");
    else if (a<b) printf("Gremio venceu mais\n");
    else printf("Nao houve vencedor\n");
    return 0;
}
