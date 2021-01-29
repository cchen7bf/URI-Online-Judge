#include <stdio.h>
int main() {
    int n, i, j=2, x, y, z, z2, mmc=1;

    while(scanf("%d", &n)!=EOF){
        scanf("%d %d %d", &x, &y, &z2);
        z=z2;
        while (j<=z2){

            if (x!=0 && y!=0 && z!=0 && x%j==0 && y%j==0 && z%j==0) {
                x/=j;
                y/=j;
                z/=j;
                mmc*=j;
            }
            else if (x!=0 && y!=0 && x%j==0 && y%j==0) {
                x/=j;
                y/=j;
                mmc*=j;
            }
            else if (x!=0 && z!=0 && x%j==0 && z%j==0) {
                x/=j;
                z/=j;
                mmc*=j;
            }
            else if (y!=0 && z!=0 && y%j==0 && z%j==0) {
                y/=j;
                z/=j;
                mmc*=j;
            }
            else if (x!=0 && z!=0 && x%j==0 && z%j==0) {
                x/=j;
                z/=j;
                mmc*=j;
            }
            else if (x!=0 && x%j==0) {
                x/=j;
                mmc*=j;
            }
            else if (y!=0 && y%j==0) {
                y/=j;
                mmc*=j;
            }
            else if (z!=0 && z%j==0) {
                z/=j;
                mmc*=j;
            }
            else j++;

        }
        printf("%d\n", mmc-n);
        mmc=1;
        j=2;
    }
    return 0;
}
