#include <stdio.h>
#include <string.h>
int main() {
    int n, i, x, c, total=0;
    char texto[20];

    scanf("%d", &n);
    while (n!=0){
        for (i=0; i<n; i++) {
            scanf("%d %[^\n]s", &x, texto);

            if (strcmp(texto, "suco de laranja")==0) c=120;
            else if (strcmp(texto, "morango fresco")==0) c=85;
            else if (strcmp(texto, "mamao")==0) c=85;
            else if (strcmp(texto, "goiaba vermelha")==0) c=70;
            else if (strcmp(texto, "manga")==0) c=56;
            else if (strcmp(texto, "laranja")==0) c=50;
            else if (strcmp(texto, "brocolis")==0) c=34;
            total+=(c*x);

        }
        if (total>130) printf("Menos %d mg\n", total-130);
        else if (total<110) printf("Mais %d mg\n", 110-total);
        else printf("%d mg\n", total);

        scanf("%d", &n);
        total=0;
    }
    return 0;
}
