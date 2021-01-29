#include <stdio.h>
int main() {
    int x1, x2;
    char c1, c2;

    scanf("%c%d %c%d", &c1, &x1, &c2, &x2);
    if (c2==c1-2 && x2==x1+1) printf("VALIDO\n");
    else if (c2==c1-1 && x2==x1+2) printf("VALIDO\n");
    else if (c2==c1+1 && x2==x1+2) printf("VALIDO\n");
    else if (c2==c1+2 && x2==x1+1) printf("VALIDO\n");
    else if (c2==c1-2 && x2==x1-1) printf("VALIDO\n");
    else if (c2==c1-1 && x2==x1-2) printf("VALIDO\n");
    else if (c2==c1+1 && x2==x1-2) printf("VALIDO\n");
    else if (c2==c1+2 && x2==x1-1) printf("VALIDO\n");
    else printf("INVALIDO\n");
    return 0;
}
