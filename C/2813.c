#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n, i, casa=0, escritorio=0, ec=0, ee=0;
    char t1[10], t2[10];    

    scanf("%d", &n);
    int tempo[n*2];

    for (i=0; i<n*2; i+=2){
        scanf("%s", t1);
        scanf("%s", t2);
        if (strcmp(t1, "chuva")==0) tempo[i]=1;
        else tempo[i]=0;
        if (strcmp(t2, "chuva")==0) tempo[i+1]=1;
        else tempo[i+1]=0;

    }

    for (i=0; i<n*2; i+=2){
        if (ec==0 && ee==0) {
            if (tempo[i]==1 && tempo[i+1]==0) {
                casa++;
                ee++;
            }
            else if (tempo[i]==0 && tempo[i+1]==1) {
                escritorio++;
                ec++;
            }
            else if (tempo[i]==1 && tempo[i+1]==1) {
                casa++;
                ec++;
            }
        }
        else if (ec!=0 || ee!=0) {
            if (tempo[i]==1 && tempo[i+1]==0 && ec==0) {
                casa++;
                ee++;
            }
            else if (tempo[i]==1 && tempo[i+1]==1 && ec==0){
                 casa++;
                 ec++;
            }        
            else if (tempo[i]==0 && tempo[i+1]==1 && ee==0) {
                escritorio++;
                ec++;
            }
            else if (tempo[i]==1 && tempo[i+1]==0 && ec!=0) {
                ec--;
                ee++;
            }
            else if (tempo[i]==0 && tempo[i+1]==1 && ee!=0) {
                ee--;
                ec++;
            }


        }
    }
    if (casa<0) casa=0;
    if (escritorio<0) escritorio=0;
    printf("%d %d\n", casa, escritorio);

    return 0;
}
