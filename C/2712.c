#include <stdio.h>
#include <string.h>
int main () {
    int i, n;
    char placa[101];

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%s", placa);
        if (placa[0]<65 || placa[0]>90 ||
            placa[1]<65 || placa[1]>90 ||
            placa[2]<65 || placa[2]>90 ||
            placa[4]<48 || placa[4]>57 ||
            placa[5]<48 || placa[5]>57 ||
            placa[6]<48 || placa[6]>57 ||
            strlen(placa)!=8 || placa[3]!=45 ||
            placa[7]<48 || placa[7]>57) printf("FAILURE\n");
        else if (placa[7]==49 || placa[7]==50) printf("MONDAY\n");
        else if (placa[7]==51 || placa[7]==52) printf("TUESDAY\n");
        else if (placa[7]==53 || placa[7]==54) printf("WEDNESDAY\n");
        else if (placa[7]==55 || placa[7]==56) printf("THURSDAY\n");
        else if (placa[7]==57 || placa[7]==48) printf("FRIDAY\n");
    }
    return 0;
}
