//
// Created by abdelrahmanelshahat on 03/03/2022.
//
#include <stdio.h>
#include <string.h>
int main(){
    char text[50],reverse[50];
    int i,j ;
    printf("Enter String :");
    gets(text);
    for (i = strlen(text)-1,j=0;i>=0;i--,j++){
        reverse[j]=text[i];

    }
    printf("Reverse string is %s",reverse);
    return 0;
}
