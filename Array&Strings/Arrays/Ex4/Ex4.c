//
// Created by abdelrahmanelshahat on 03/03/2022.
//
#include <stdio.h>
int main(){
    int n,i,x,pos;
    printf("Enter No.of Elements :");
    scanf("%d",&n);
    int Arr[10];
    printf("Enter Elements :");
    for(i = 0; i <n ; i++){
        scanf("%d",&Arr[i]);
    }
    printf("Enter Element to be inserted :");
    scanf("%d",&x);
    printf("Enter The location :");
    scanf("%d",&pos);
    for( i = n; i>=pos -1;i-- ){
        Arr[i] = Arr[i-1];
    }
    Arr[pos-1] = x;
    n++;
    for(i = 0; i <n ; i++){
        printf("%d ",Arr[i]);
    }
    return 0;
}