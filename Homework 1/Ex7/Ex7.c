//
// Created by abdelrahmanelshahat on 23/02/2022.
//
#include <stdio.h>
int main(){
    int a = 5 , b = 7;
    printf("before swapping, value of a =%d\n"
           "before swapping, value of b =%d\n",a,b);
    a +=b;
    b = a-b;
    a-=b;
    printf("After swapping, value of a =%d\n"
           "After swapping, value of b =%d",a,b);
    return 0;
}