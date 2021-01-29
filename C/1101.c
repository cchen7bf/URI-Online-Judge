#include <stdio.h>
int main() {
    int i, m, n, menor, maior, soma=0;
    scanf("%d %d", &m, &n);
    while (m>0 && n>0){
        if (m>n) {
            menor=n;
            maior=m;
        } 
        else {
            menor=m;
            maior=n;
        }
        for (i=menor; i<=maior; i++) {
            printf("%d ", i);
            soma+=i;
        }
        printf("Sum=%d\n", soma);
        soma=0;
        scanf("%d %d", &m, &n);
        
    }
    return 0;
}
