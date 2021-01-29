#include <stdio.h>
#include <math.h>
int main() {
    int x, y, z;
    double area;
    scanf("%d %d %d", &x, &y, &z);
    while(x!=0 && y!=0 && z!=0){
        area=x*y*z;
        printf("%.0lf\n", round(pow(area, 1.0/3.0)));
        scanf("%d %d %d", &x, &y, &z);
    }
    return 0;
}
