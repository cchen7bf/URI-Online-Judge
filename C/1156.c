#include <stdio.h>
int main() {
    double s=1.0, down=2;
    int up=3;
    while (up!=39) {
        s=s+(up/down);
        up+=2;
        down*=2;
    }
    printf("%.2lf\n", s);
    return 0;
}
