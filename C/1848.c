#include <stdio.h>
#include <string.h>
int main() {
    int cont=0, soma=0, piscada=0;
    char grito[8];

    while (cont!=3) {
        scanf(" %[^\n]s", grito);

        if (strcmp(grito, "--*")==0) piscada=1;
        else if (strcmp(grito, "***")==0) piscada=7;
        else if (strcmp(grito, "---")==0) piscada=0;
        else if (strcmp(grito, "-*-")==0) piscada=2;
        else if (strcmp(grito, "**-")==0) piscada=6;
        else if (strcmp(grito, "*--")==0) piscada=4;
        else if (strcmp(grito, "*-*")==0) piscada=5;
        else if (strcmp(grito, "-**")==0) piscada=3;
        soma+=piscada;
        piscada=0;
        if (strcmp(grito, "caw caw")==0){
            cont++;
            printf("%d\n", soma);
            soma=0;
        }
    }
    
    return 0;
}
