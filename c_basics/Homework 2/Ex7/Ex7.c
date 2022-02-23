//
// Created by abdelrahmanelshahat on 23/02/2022.
//
#include <stdio.h>
int main(){
    int i,factoril=1,x;
    printf("Enter an integer :");
    scanf("%d",&x);
    if(x<0){
        printf("Error !!! Factorial of Negative Number doesnt exist");
    }else if(x == 0){
        printf("Error !!! Factorial of Zero doesnt exist");
    } else{
        for(i=1;i<=x;i++){
            factoril*=i;
        }
        printf("Factorial = %d",factoril);
    }

    return 0;
}
