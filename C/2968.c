#include <stdio.h>
int main() {
    double cont=1.0, i=1.0, voltas, placas, total;

    scanf("%lf %lf", &voltas, &placas);
    total=voltas*placas;
    while (cont!=10.0){
        if (i>=(cont*total)/10.0){
            printf("%.0lf", i);
            if (cont!=9) printf(" ");
            else printf("\n");
            cont++;
            i++;
        }
        else i++;
    }
    
    return 0;
}
