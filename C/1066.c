#include <stdio.h>
int main() {
    int i, par=0, impar=0, positivo=0, negativo=0, n;

    for (i=0; i<5; i++) {
        scanf("%d", &n);
        if (n==0) n==0;
        else if (n>0) positivo++;
        else negativo++;


        if (n%2==0) par++;
        else impar++;
    }
        printf("%d valor(es) par(es)\n", par);
        printf("%d valor(es) impar(es)\n", impar);
        printf("%d valor(es) positivo(s)\n", positivo);
        printf("%d valor(es) negativo(s)\n", negativo);
    
    return 0;
}
