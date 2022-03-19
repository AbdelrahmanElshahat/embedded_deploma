//
// Created by shahat on 3/19/22.
//
#include <stdio.h>
#include "Ex1.h"
int main(){
    int start,end;
    printf("Enter two numbers (interval):");
    scanf("%d%d",&start,&end);
    printf("Prime Numbers between %d and %d are : ",start,end);
    prime(start,end);
    return 0;
}