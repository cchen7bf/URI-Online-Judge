#include <stdio.h>
#include <string.h>
int main() {
    int n, i, x;
    char nome[100];

    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf("%s %d", nome, &x);
        if (strcmp(nome, "Thor")==0) printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
