//
// Created by abdelrahmanelshahat on 23/02/2022.
//
#include <stdio.h>
int main(){
    float x;
    printf("Enter Number to check :");
    scanf("%f",&x);
    if(x<0){
        printf("%.2f is negative",x);
    } else if(x == 0){
        printf("You Entered Zero");
    }else{
        printf("%.2f is positive",x);
    }
    return 0;
}
