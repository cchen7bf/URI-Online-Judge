#include <stdio.h>
int main() {
    int i, n;
    char texto[100];

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf(" %[^\n]s", texto);
        printf("I am Toorg!\n");
    }
    return 0;
}
