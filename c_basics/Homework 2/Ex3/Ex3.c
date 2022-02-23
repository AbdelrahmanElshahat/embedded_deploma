//
// Created by abdelrahmanelshahat on 23/02/2022.
//
#include <stdio.h>
int main(){
    float a,b,c,largest;
    printf("Enter three Numbers :");
    scanf("%f %f %f",&a,&b,&c);
    largest = a;
    if(b>largest){
        if(b>c){
            largest=b;
        }else{
            largest =c;
        }
    } else if(c>largest){
        if(c>b){
            c = largest;
        }
    }
    printf("The largest Number =%.2f",largest);
    return 0;
}
