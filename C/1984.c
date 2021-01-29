#include <stdio.h>
#include <string.h>

int main() {
    char numero[11], qtd, i;
    qtd=strlen(numero);
    scanf("%d", numero);
    for (i=0; i<qtd; i++){
        printf("%d ", numero[i]);
    }

    return 0;
}
