//
// Created by abdelrahmanelshahat on 23/02/2022.
//
#include <stdio.h>
int main(){
    int x,sum=0,i;
    printf("Enter an Integer :");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        sum+=i;
    }
    printf("Sum = %d",sum);
    return 0;
}
