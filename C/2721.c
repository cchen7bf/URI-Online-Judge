#include <stdio.h>
int main() {
    int i, x, soma=0, res;


    for (i=0; i<9; i++){
        scanf("%d", &x);
        soma+=x;
    }
    res=soma%9;
    switch (res) {
    case 1: printf("Dasher\n"); break;
    case 2: printf("Dancer\n"); break;
    case 3: printf("Prancer\n"); break;
    case 4: printf("Vixen\n"); break;
    case 5: printf("Comet\n"); break;
    case 6: printf("Cupid\n"); break;
    case 7: printf("Donner\n"); break;
    case 8: printf("Blitzen\n"); break; 
    case 0: printf("Rudolph\n"); break;
    }
    return 0;
}
