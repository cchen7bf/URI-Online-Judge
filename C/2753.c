#include <stdio.h>
int main() {
    int i, n=97;
    char c=97;
    
    for (i=0; i<26; i++) {
        printf("%d e %c\n", n+i, c+i);
    }
    return 0;
}
