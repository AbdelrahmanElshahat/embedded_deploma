//
// Created by shahat on 3/24/22.
//
#include <stdio.h>
#define PI 3.14
#define area(r) r*PI*r
int main(){
    float redius,area;
    printf("Enter Redius: ");
    scanf("%f",&redius);
    area= area(redius);
    printf("Area = %.2f",area);
    return 0;
}
