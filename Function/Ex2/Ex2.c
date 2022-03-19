//
// Created by shahat on 3/19/22.
//
#include <stdio.h>
int factorial(int n){
    if(n!=1)
        return n* factorial(n-1);
}
int main(){
    int n;
    printf("Enter positive integer:");
    scanf("%d",&n);
    printf("factorial of %d = %d",n, factorial(n));
    return 0;
}
