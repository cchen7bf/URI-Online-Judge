#include <stdio.h>
#include <string.h>
int main() {
    int h, m, o, n, i;
    char resp[20]={};

    scanf("%d", &n);

    for (i=0; i<n; i++) {
        scanf("%d %d %d", &h, &m, &o);
        if (o==1) strcpy(resp, "A porta abriu!");
        else strcpy(resp, "A porta fechou!");
    
        if (h>=10 &&m>=10) printf("%d:%d - %s\n", h, m, resp);
        else if (h<10 && m<10) printf("0%d:0%d - %s\n", h, m, resp);
        else if (h<10) printf("0%d:%d - %s\n", h, m, resp);
        else if (m<10) printf("%d:0%d - %s\n", h, m, resp);

    }
    return 0;
}
