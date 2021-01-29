#include <stdio.h>
int main() {
    int hora, min;

    while (scanf("%d:%d", &hora, &min)!=EOF){

        if (hora==7) printf("Atraso maximo: %d\n", min);
        else if (hora>=8) printf("Atraso maximo: %d\n", min+60+((hora-8)*60));
        else printf("Atraso maximo: 0\n");

    }
    return 0;
}
