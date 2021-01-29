#include <stdio.h>
#include <string.h>
int main() {
    int n, k, i=-1, j=-1, len1, len2;
    char t1[51], t2[51];

    scanf("%d", &n);
    for (k=0; k<n; k++) {
        scanf("%s %s", t1, t2);
        len1=strlen(t1);
        len2=strlen(t2);
        while(len1-1!=i || len2-1!=j){
            if(i!=55){
                i++;
                printf("%c", t1[i]);
                if (i==len1-1) i=55;
            }    
            if(j!=55){
                j++;
                printf("%c", t2[j]);
                if (j==len2-1) j=55;                
            }
        }
        printf("\n");
        
    }
    return 0;
}
