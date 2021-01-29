#include <stdio.h>
int main() {
    int p, j1, j2, r, a;

    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);
    if (a==1 && r==1) printf("Jogador 2 ganha!\n");
    else if (a==1 && r==0) printf("Jogador 1 ganha!\n");
    else if ((j1+j2)%2!=p && r==0) printf("Jogador 1 ganha!\n");
    else if ((j1+j2)%2==p && r==1) printf("Jogador 1 ganha!\n");
    else if ((j1+j2)%2!=p && r==1) printf("Jogador 1 ganha!\n");
    else printf("Jogador 2 ganha!\n");
    return 0;
}
