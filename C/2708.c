#include <stdio.h>
#include <string.h>
int main() {
    int saida=0, volta=0, j1=0, j2=0, x;
    char texto[10];


    while (1){
    scanf("%s", texto);
    if (strcmp(texto, "ABEND")==0) break;
    scanf("%d", &x);
    if (strcmp(texto, "SALIDA")==0) {
        saida+=x;
        j1++;
    }
    else {
        volta+=x;
        j2++;
    }
    }
    printf("%d\n%d\n", saida-volta, j1-j2);
    return 0;
}
