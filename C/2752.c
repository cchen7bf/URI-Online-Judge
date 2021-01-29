#include <stdio.h>
int main() {
    char texto[51]={"AMO FAZER EXERCICIO NO URI"};
    
    printf("<%s>\n", texto);            //<AMO FAZER EXERCICIO NO URI>
    printf("<%30s>\n", texto);          //<    AMO FAZER EXERCICIO NO URI>
    printf("<%.20s>\n", texto);         //<AMO FAZER EXERCICIO >
    printf("<%-20s>\n", texto);         //<AMO FAZER EXERCICIO NO URI>
    printf("<%-30s>\n", texto);         //<AMO FAZER EXERCICIO NO URI    >
    printf("<%.30s>\n", texto);         //<AMO FAZER EXERCICIO NO URI>
    printf("<%30.20s>\n", texto);       //<          AMO FAZER EXERCICIO >
    printf("<%-30.20s>\n", texto);      //<AMO FAZER EXERCICIO           >

    return 0;
}
