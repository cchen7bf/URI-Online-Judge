#include <stdio.h>
int main() {
    int n, i;
    char curso[101];

    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf(" %[^\n]s", curso);
    }
    printf("Ciencia da Computacao\n");
    return 0;
}
