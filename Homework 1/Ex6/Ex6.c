//
// Created by abdelrahmanelshahat on 23/02/2022.
//
#include <stdio.h>
void swap(float *a,float *b){
    float temp ;
    temp = *a;
    *a=*b;
    *b=temp;
}
int main(){
    float x,y;
    printf("Enter value of x :");
    scanf("%f",&x);
    printf("Enter value of y :");
    scanf("%f",&y);
    swap(&x,&y);
    printf("After swapping, value of x =%f\n"
           "After swapping, value of y =%f",x,y);
    return 0;
}