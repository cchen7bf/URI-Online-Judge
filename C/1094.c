#include <stdio.h>
#include <string.h>
    int main() {
        int i, sapo=0, coelho=0, rato=0, n, entrada, total=0; 
        char animal[1];
        double pc, pr,ps;
        scanf("%d", &n);
        for (i=0; i<n; i++) {
            scanf("%d %c", &entrada, animal);
            if (strcmp(animal, "C")==0) coelho+=entrada*100;
            else if (strcmp(animal, "R")==0) rato+=entrada*100;
            else if (strcmp(animal, "S")==0) sapo+=entrada*100;
        }

        total=sapo+coelho+rato;
        printf("Total: %d cobaias\n", total/100);
        printf("Total de coelhos: %d\n", coelho/100);
        printf("Total de ratos: %d\n", rato/100);
        printf("Total de sapos: %d\n", sapo/100);
        pc=(100.0*coelho)/(total);
        pr=(100.0*rato)/(total);
        ps=(100.0*sapo)/(total);
        if (n==0) {
        printf("Percentual de coelhos: 0.00%%\n");
        printf("Percentual de ratos: 0.00%%\n");
        printf("Percentual de sapos: 0.00%%\n");
        } else {
        printf("Percentual de coelhos: %.2lf %%\n", pc);
        printf("Percentual de ratos: %.2lf %%\n", pr);
        printf("Percentual de sapos: %.2lf %%\n", ps);
        }
        return 0;
    }


