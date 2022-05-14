//
// Created by abdelrahmanelshahat on 03/03/2022.
//
#include <stdio.h>
int main(){
    int n,element,i;
    printf("Enter no. of  elements of Array :");
    scanf("%d",&n);
    int Arr[n];
    printf("Enter  elements of Array:\n");
    for (i = 0 ; i<n;i++){
        scanf("%d",&Arr[i]);
    }
    printf("Enter The element To be searched :");
    scanf("%d",&element);
    for (i = 0;i<n;i++ ){
        if(element == Arr[i] ){
            printf("Number found at location = %d",i+1);
            break;
        }
    }

    return 0;
}
