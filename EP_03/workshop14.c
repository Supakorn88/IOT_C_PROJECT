#include "stdio.h"
#define LINE printf("#############################\n");

void main (){
    int level;
    LINE
    printf("PROGRAM WELCOME SAU\n");
    LINE
    printf("Input your level : ");
    scanf("%d" , &level );
    LINE    
    switch (level){
    case 1:
        printf("Welcome Freshy");
        break;
    case 2:
        printf("Welcome sophomore");
        break;
    case 3:
        printf("Welcome Junior");
        break;
    case 4:
        printf("Welcome Senior");
        break;

    default:
        printf("Oh..No..");
        break;
    }
}