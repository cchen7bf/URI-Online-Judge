#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n, i, r;
    char x[100], resp[100], y[2];

    scanf("%d", &n);

    while (n!=0) {
        r= (n%16);
        itoa(r,x,2);
        if (strcmp(x, "10")==0) strcpy(y, "A");
        else if (strcmp(x, "11")==0) strcpy(y, "B");
        else if (strcmp(x, "12")==0) strcpy(y, "C");
        else if (strcmp(x, "13")==0) strcpy(y, "D");
        else if (strcmp(x, "14")==0) strcpy(y, "E");
        else if (strcmp(x, "15")==0) strcpy(y, "F");
    
        strcat(y, resp);
        n=n/16;
    }
    return 0;
}
