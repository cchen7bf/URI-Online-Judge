#include <stdio.h>
# include <string.h>
int main() {
    int x, n, i;
    char texto[10];

    scanf("%d %d", &x, &n);
    for (i=0; i<n; i++) {
        scanf("%s", texto);
        if (strcmp(texto, "fechou")==0) x++;
        else x--;
    }
    printf("%d\n", x);
    return 0;
}
