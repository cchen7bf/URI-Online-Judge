#include <stdio.h>
int main() {
    int dia1, dia2, hora1, hora2, minuto1, minuto2, segundo1, segundo2, tempo1, tempo2, intervalo, acrescimo=0, acrescimo2=0, acrescimo3=0;

    scanf("Dia %d", &dia1);
    scanf("%d : %d : %d", &hora1, &minuto1, &segundo1);
    
    scanf("\nDia %d", &dia2);
    scanf("%d : %d : %d", &hora2, &minuto2, &segundo2);


    if (hora1==0)
        hora1=24;
    if (hora2==0)
        hora2=24;

    if (segundo2>=segundo1 && minuto2!=minuto1) segundo2=segundo2-segundo1;
    else {
        segundo2=60-segundo1+segundo2;
        acrescimo2=1;
    }

    if (minuto1==minuto2 &&segundo2!=0) {
        minuto2=59;
        acrescimo=1;
    }
    else if (minuto2>=minuto1) minuto2=minuto2-minuto1-acrescimo2;
    else if (segundo2<segundo1) {
        minuto2=(60-(minuto1-minuto2))-acrescimo2;
        acrescimo=1;}
    else {
        minuto2=60-minuto1+minuto2;
        acrescimo=1;
    }

    if (hora2>hora1)
        hora2=hora2-hora1-acrescimo;
    else if (hora2==hora1 && minuto2>minuto1)
        hora2=0;
    else if (hora2==hora1 && minuto2<=minuto1)
        hora2=24-acrescimo;
    else if (hora2<hora1) {
        hora2=(24-(hora1-hora2))-acrescimo;
        acrescimo3=1;
        }

    if (segundo2>=60) {
        segundo2-=60;
        minuto2++;
    }
    if (minuto2>=60) {
        minuto2-=60;
//        hora2++;
    }
    if (hora2>=24) {
        hora2-=24;
        dia2++;
    }
    

    printf("%d dia(s)\n", dia2 -(dia1+acrescimo3));
    printf("%d hora(s)\n", hora2);
    printf("%d minuto(s)\n", minuto2);
    printf("%d segundo(s)\n", segundo2);

    return 0;
}
