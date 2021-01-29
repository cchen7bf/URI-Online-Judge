#include <stdio.h>
int main() {
    int i;
    float f;
    char c[2], frase[51];

    scanf("%d %f %s %[^\n]s\n", &i, &f, c, frase);
    printf("%d%f%s%s\n", i, f, c, frase);
    printf("%d\t%f\t%s\t%s\n", i, f, c, frase);
    printf("%10d%10.6f%10s%10s\n", i, f, c, frase);
    return 0;
}

