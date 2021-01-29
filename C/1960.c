#include <stdio.h>
int main() {
    int n, i=0, unidade=0, dezena=0, centena=0;
    scanf("%d", &n);
    n*=100;
    while (n>=10000){
        n-=10000;
        centena++;
    }
    while (n>=1000){
        n-=1000;
        dezena++;
    }
    while (n>=100){
        n-=100;
        unidade++;
    }

    if (centena==1) printf("C");
    else if (centena==2) printf("CC");
    else if (centena==3) printf("CCC");
    else if (centena==4) printf("CD");
    else if (centena==5) printf("D");
    else if (centena==6) printf("DC");
    else if (centena==7) printf("DCC");
    else if (centena==8) printf("DCCC");
    else if (centena==9) printf("CM");
    if (dezena==1) printf("X");
    else if (dezena==2) printf("XX");
    else if (dezena==3) printf("XXX");
    else if (dezena==4) printf("XL");
    else if (dezena==5) printf("L");
    else if (dezena==6) printf("LX");
    else if (dezena==7) printf("LXX");
    else if (dezena==8) printf("LXXX");
    else if (dezena==9) printf("XC");
    if (unidade==1) printf("I");
    else if (unidade==2) printf("II");
    else if (unidade==3) printf("III");
    else if (unidade==4) printf("IV");
    else if (unidade==5) printf("V");
    else if (unidade==6) printf("VI");
    else if (unidade==7) printf("VII");
    else if (unidade==8) printf("VIII");
    else if (unidade==9) printf("IX");

    printf("\n");
    return 0;
}
