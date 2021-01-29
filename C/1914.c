#include <stdio.h>
#include <string.h>
int main() {
    int n, x, y, i;
    char nome1[100], nome2[100], teste1[6], teste2[6], resposta[6]={};
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf ("%s %s %s %s", nome1, teste1, nome2, teste2);
        scanf("%d %d", &x, &y);
        if ((x+y)%2==0) strcpy(resposta, "PAR");
        else strcpy(resposta, "IMPAR");

        if (strcmp(teste1, resposta)==0) printf("%s\n", nome1);
        else printf("%s\n", nome2);

    }
    return 0;
}
