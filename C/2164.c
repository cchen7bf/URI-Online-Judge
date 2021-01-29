#include <stdio.h>
#include <math.h>
int main() {
    int n;
    double resp;

    scanf("%d", &n);
    resp=(pow(((1.0+sqrt(5.0))/2.0),n)-pow(((1.0-sqrt(5.0))/2.0),n))/sqrt(5.0);


    printf("%0.1lf\n", resp);
    return 0;
}
