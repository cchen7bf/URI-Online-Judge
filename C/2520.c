#include <stdio.h>
int main() {
    int x, y, i, j, x2, y2, x1, y1, cont=0;
    while (scanf("%d %d", &x, &y)!=EOF) {
        int matriz[x][y];
        for (i=0; i<x; i++){
            for (j=0; j<y; j++){
                scanf("%d", &matriz[i][j]);
                if (matriz[i][j]==2) {
                    x2=i;
                    y2=j;
                
                }
                else if (matriz[i][j]==1) {
                    x1=i;
                    y1=j;

                }
            }
        }
        while (x1!=x2 || y1!=y2){
            if(x2>x1){
                cont++;
                x2--;
            }
            else if (x2<x1){
                cont++;
                x2++;
            }
            if (y2>y1){
                cont++;
                y2--;
            }
            else if (y2<y1){
                cont++;
                y2++;
            }
        }
        printf("%d\n", cont);
        cont=0;
    }
    return 0;
}
