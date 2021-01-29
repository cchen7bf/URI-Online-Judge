#include <stdio.h>
int main() {
    int f15=0, f55=0, bissexto=0;
    long long int n;

    while(scanf("%lld", &n)!=EOF){
        if (n%15==0) f15=1;
        if (n%55==0) f55 =1;

        if (n%400==0) bissexto=1;
        else if (n%4==0 && n%100!=0) bissexto=1;

        if (bissexto==1) printf("This is leap year.\n");
        if (f15==1) printf("This is huluculu festival year.\n");
        if (f55==1 && bissexto==1) printf("This is bulukulu festival year.\n");
        if (bissexto==0 && f15==0 && f55==0) printf("This is an ordinary year.\n");
        if (bissexto==0 && f55==1) printf("This is an ordinary year.\n");
        f15=0;
        f55=0;
        bissexto=0;
        printf("\n");
    }
    return 0;
}
