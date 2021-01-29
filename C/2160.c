#include <stdio.h>
#include <string.h>

int main() {
    int tamanho;
    char texto[501];

    scanf("%[^\n]s", texto);
    tamanho=strlen(texto);
    if (tamanho<=80) printf("YES\n");
    else printf("NO\n");
    return 0;
}
