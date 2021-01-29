#include <stdio.h>
#include <string.h>

int main() {
    int i, n, hobbit=0, humano=0, elfo=0, anao=0, mago=0;
    char nome[100], raca[2];

    scanf("%d", &n);

    for (i=0; i<n; i++) {
        scanf("%s %s", nome, raca);

        if (strcmp(raca, "A")==0) anao++;
        else if (strcmp(raca, "E")==0) elfo++;
        else if (strcmp(raca, "H")==0) humano++;
        else if (strcmp(raca, "M")==0) mago++;
        else if (strcmp(raca, "X")==0) hobbit++;

    }
    printf("%d Hobbit(s)\n%d Humano(s)\n%d Elfo(s)\n%d Anao(s)\n%d Mago(s)\n", hobbit, humano, elfo, anao, mago);
    return 0;
}
