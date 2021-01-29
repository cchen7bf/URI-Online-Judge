#include <stdio.h>
#include <string.h>
int main() {
    int i, n;
    char op1[10], op2[10];

    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf("%s %s", op1, op2);
        if (strcmp(op1, "ataque")==0 && strcmp(op2, "ataque")==0) printf("Aniquilacao mutua\n");
        else if (strcmp(op1, "papel")==0 && strcmp(op2, "papel")==0) printf("Ambos venceram\n");
         else if (strcmp(op1, "pedra")==0 && strcmp(op2, "pedra")==0) printf("Sem ganhador\n");
         else if (strcmp(op1, "ataque")==0) printf("Jogador 1 venceu\n");
         else if (strcmp(op2, "ataque")==0) printf("Jogador 2 venceu\n");
         else if (strcmp(op1, "pedra")==0) printf("Jogador 1 venceu\n");
         else if (strcmp(op2, "pedra")==0) printf("Jogador 2 venceu\n");
    }

    return 0;
}
