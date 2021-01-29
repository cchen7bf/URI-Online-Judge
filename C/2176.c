#include <stdio.h>
#include <string.h>
int main() {
    int i, cont=0;
    char n[101];

    scanf("%s", n);
    for (i=0; i<strlen(n); i++) {
        if (n[i]==49) cont++;
        
    }

    if (cont%2==0) printf("%s0\n", n);
    else printf("%s1\n", n);

    return 0;
}
