#include <stdio.h>
#include <string.h>

int main() {
    int tam;
    char texto[501];

    scanf("%[^\n]s", texto);
    tam=strlen(texto);
    if (tam<=140) printf("TWEET\n");
    else printf("MUTE\n");
    return 0;
}
