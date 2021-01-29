#include <stdio.h>
#include <string.h>

int main() {
    int n, i;
    char texto[10001];
    
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%s", texto);
        printf("%.2lf\n", strlen(texto)*0.01);
    }
    return 0;
}
