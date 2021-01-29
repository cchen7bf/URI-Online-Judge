#include <stdio.h>
int main() {
    int n, i, cont=0, soma=0;
    scanf("%d", &n);
    while (n!=0) {
        i=n;
        while (cont!=5) {
            
            if (i%2==0) {
                soma+=i;
                cont++;
                i++;
            }
            i++;
        }
        printf("%d\n", soma);
        soma=0;
        cont=0;     
        scanf("%d", &n);   
    }
    return 0;
}
