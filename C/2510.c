#include <stdio.h>
int main(){
    int i, n;
    char texto[30];

    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf("%s", texto);
        printf("Y\n");
    }
    return 0;
}
