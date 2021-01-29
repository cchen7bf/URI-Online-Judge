/*
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
Entrada
A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

Saída
Imprima todas as classificações do triângulo especificado na entrada.
*/
#include <stdio.h>
#include <math.h>
int main() {
    int i, j;
    double x[3], temp, a, b, c;

    for (i=0; i<3; i++) {
        scanf("%lf", &x[i]);
    }

    for (i=0; i<3; i++) {
        for (j=i+1; j<3; j++) {
            if (x[i]<x[j]) {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    a=x[0];
    b=x[1];
    c=x[2];
    if (a >= b+ c) printf("NAO FORMA TRIANGULO\n"); 
    else if (pow(a,2) == pow(b,2) + pow(c,2)) printf("TRIANGULO RETANGULO\n");
    else if (pow(a,2) > pow(b,2) + pow(c,2)) printf("TRIANGULO OBTUSANGULO\n");
    else if (pow(a,2) < pow(b,2) + pow(c,2)) printf("TRIANGULO ACUTANGULO\n");
    if (a==b && a==c && b==c) printf("TRIANGULO EQUILATERO\n");
    else if (a==b || b==c || a==c) printf("TRIANGULO ISOSCELES\n");
    
    return 0;
}
