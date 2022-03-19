//
// Created by shahat on 3/19/22.
//
#include <stdio.h>
#include "Ex1.h"
void prime(int a,int b){
    int i,j,flag;
    for(i=a;i<=b;i++){
        if (i == 0  || i == 1)
            continue;
        flag = 1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                flag = 0;
                break;
            }
        }
        if (flag == 1){
            printf("%d\n",i);
        }
    }
}