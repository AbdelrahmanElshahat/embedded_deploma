//
// Created by abdelrahmanelshahat on 03/03/2022.
//
#include <stdio.h>
int main(){
    int n,i ;
    printf("Enter Numbers of data :");
    scanf("%d",&n);
    float Arr[n],sum=0;
    for ( i = 0; i < n ; i++) {
        printf("%d. Enter the Number:",i+1);
        scanf("%f",&Arr[i]);
        sum+=Arr[i];
    }
    printf("Average = %.2f",sum/n);
    return 0;
}
