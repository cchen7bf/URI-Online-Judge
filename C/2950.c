#include <stdio.h>
int main() {
    int c, x, y;
    
    scanf("%d %d %d", &c, &x, &y);
    printf("%.2lf\n", c/(x*1.0+y));
    return 0;
}
