#include <stdio.h>
int main() {
    int velocidade, tempo;

    while(scanf("%d %d", &velocidade, &tempo)!=EOF){
        printf("%d\n", velocidade*tempo*2);
    }
    return 0;
}
