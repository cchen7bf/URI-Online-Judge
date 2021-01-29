#include <stdio.h>
int main() {
    char texto1[100], texto2[100];

    scanf("%s,%[^\n]s", texto1, texto2);
 //   printf("%s", texto1);
    printf("\n");
    printf("%s", texto2);
    return 0;
}
