#include <stdio.h>
#include <conio.h>
#define PA printf("+++++++++++++++++++++++++\n");
void main(){
    char car_number[20];
    double car_weight;

    PA
    printf("    Program Truck\n");
    PA
    printf("Input car number : ");
    scanf("%s", &car_number);
    printf("Input car weight : ");
    scanf("%lf" , &car_weight );
    PA
    if( car_weight <= 2500){
        printf("Pass.....o_o\n");
    }else{
        printf("Not Pass.....*_*\n");
    }
    PA


    getch;
}