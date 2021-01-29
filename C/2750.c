#include <stdio.h>
int main() {
    int i, decimal=0, octal=0;
    char hexadecimal=48;
    printf("---------------------------------------\n");
    printf("|  decimal  |  octal  |  Hexadecimal  |\n");
    printf("---------------------------------------\n");
    for (i=0; i<8; i++){
        printf("|      %d    |    %d    |       %c       |\n", decimal+i, octal+i, hexadecimal+i);
    }
    octal=2;
    for (i=8; i<10; i++){
        printf("|      %d    |   %d    |       %c       |\n", decimal+i, octal+i, hexadecimal+i);
    }
    hexadecimal=65;
    decimal=10;
    octal=12;
    for (i=0; i<6; i++){
        printf("|     %d    |   %d    |       %c       |\n", decimal+i, octal+i, hexadecimal+i);
    }
    printf("---------------------------------------\n");
    return 0;
}
