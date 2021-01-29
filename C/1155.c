#include <stdio.h>
int main() {
    double resp=0;
    int i;

    for (i=1; i<=100; i++) {
        resp=resp+(1.0/i);
    }
    printf("%.2lf\n", resp);
    return 0;
}


