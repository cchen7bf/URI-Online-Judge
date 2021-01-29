#include <stdio.h>
#include <string.h>
int main() {
    int vencedor;
    char t1[10], t2[10], t3[10];

    while(scanf("%s %s %s", t1, t2, t3)!=EOF){
        if      (strcmp(t1, "papel")==0   && strcmp(t2, "pedra")==0 &&   strcmp(t3, "pedra")==0) vencedor=1;
        else if (strcmp(t1, "tesoura")==0 && strcmp(t2, "papel")==0 &&  strcmp(t3, "papel")==0) vencedor=1;
        else if (strcmp(t1, "pedra")==0   && strcmp(t2, "tesoura")==0 && strcmp(t3, "tesoura")==0) vencedor=1;

        else if (strcmp(t2, "papel")==0   && strcmp(t1, "pedra")==0   && strcmp(t3, "pedra")==0) vencedor=2;
        else if (strcmp(t2, "tesoura")==0 && strcmp(t1, "papel")==0  && strcmp(t3, "papel")==0) vencedor=2;
        else if (strcmp(t2, "pedra")==0   && strcmp(t1, "tesoura")==0 && strcmp(t3, "tesoura")==0) vencedor=2;

        else if (strcmp(t3, "papel")==0   && strcmp(t1, "pedra")==0   && strcmp(t2, "pedra")==0) vencedor=3;
        else if (strcmp(t3, "tesoura")==0 && strcmp(t1, "papel")==0  && strcmp(t2, "papel")==0) vencedor=3;
        else if (strcmp(t3, "pedra")==0   && strcmp(t1, "tesoura")==0 && strcmp(t2, "tesoura")==0) vencedor=3;

        else vencedor=0;

        if (vencedor==0) printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
        else if (vencedor==1) printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
        else if (vencedor==2) printf("Iron Maiden's gonna get you, no matter how far!\n");
        else if (vencedor==3) printf("Urano perdeu algo muito precioso...\n");

    }

    return 0;
}
