#include <stdio.h>
int main() {
    int n, i, ataque, defesa, level, bonus;
    double vg1, vg2;

    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf("%d", &bonus);
        scanf("%d %d %d", &ataque, &defesa, &level);
        if (level%2==0) vg1=(ataque+defesa)/2.0+bonus;
        else vg1=(ataque+defesa)/2.0;

        scanf("%d %d %d", &ataque, &defesa, &level);
        if (level%2==0) vg2=(ataque+defesa)/2.0+bonus;
        else vg2=(ataque+defesa)/2.0;

        if (vg1>vg2) printf("Dabriel\n");
        else if (vg1<vg2) printf("Guarte\n");
        else printf("Empate\n");

    }
    return 0;
}
