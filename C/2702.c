#include <stdio.h>
int main() {
    int fd, cd, md, fs, cs, ms, cont=0;

    scanf("%d %d %d", &fd, &cd, &md);
    scanf("%d %d %d", &fs, &cs, &ms);

    if (fd<fs) cont=fs-fd;
    if (cd<cs) cont=cont+cs-cd;
    if (md<ms) cont=cont+ms-md;

    printf("%d\n", cont);
    return 0;
}
