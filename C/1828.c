#include <stdio.h>
#include <string.h>
int main() {
    int n, i;
    char op1[8], op2[8];

    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        scanf("%s %s", op1, op2);
        if (strcmp(op1, op2)==0) printf("Caso #%d: De novo!\n", i);
        else if (strcmp(op1, "papel")==0 && (strcmp(op2, "tesoura")==0 || strcmp(op2, "lagarto")==0)) printf("Caso #%d: Raj trapaceou!\n", i);
        else if (strcmp(op1, "tesoura")==0 && (strcmp(op2, "pedra")==0 || strcmp(op2, "Spock")==0)) printf("Caso #%d: Raj trapaceou!\n", i);
        else if (strcmp(op1, "pedra")==0 && (strcmp(op2, "papel")==0 || strcmp(op2, "Spock")==0)) printf("Caso #%d: Raj trapaceou!\n", i);
        else if (strcmp(op1, "lagarto")==0 && (strcmp(op2, "tesoura")==0 || strcmp(op2, "pedra")==0)) printf("Caso #%d: Raj trapaceou!\n", i);
        else if (strcmp(op1, "Spock")==0 && (strcmp(op2, "papel")==0 || strcmp(op2, "lagarto")==0)) printf("Caso #%d: Raj trapaceou!\n", i);
        else printf("Caso #%d: Bazinga!\n", i);
    }
    return 0;
}
