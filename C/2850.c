#include <stdio.h>
#include <string.h>


int main() {

    char texto[10];

    while (scanf("%[^\n]s" ,texto)!=EOF){
        if (strcmp(texto, "esquerda")==0) printf("ingles\n");
        else if (strcmp(texto, "direita")==0) printf("frances\n");
        else if (strcmp(texto, "nenhuma")==0) printf("portugues\n");
        else if (strcmp(texto, "as duas")==0) printf("caiu\n");
        scanf(" %[^\n]s" ,texto);
    }
    return 0;
}
