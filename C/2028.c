#include <stdio.h>
int main() {
    int n, i, j, cont=0, num=0, imp=0, soma=0;

    while (scanf("%d", &n)!=EOF) {
        cont++;
        for (i=0; i<=n; i++){
            if (n!=0){
                while (imp<i){
                    imp++;
                }
                soma+=imp;
                imp=0;

            }
        }
        if (n==0) printf("Caso %d: 1 numero\n", cont);
        else printf("Caso %d: %d numeros\n", cont, soma+1);
        for (i=0; i<=n; i++){
            if (i==0) printf("0");
            if (n!=0){
                while (num<i){
                        printf("%d", i);
                        if (num!=i-1) printf(" ");
                    num++;
                }
                if (i!=n) printf(" ");
                num=0;
                soma=0;

            }
 
        }
        printf("\n");
        printf("\n");

    }
    return 0;
}
