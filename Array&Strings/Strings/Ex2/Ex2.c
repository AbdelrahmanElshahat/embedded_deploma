//
// Created by abdelrahmanelshahat on 03/03/2022.
//
#include <stdio.h>
int main(){
    char text [100];
    int i=0;
    printf("Enter string :");
    gets(text);
    while (text[i] != '\0'){

        ++i;
    }
    printf("Length of string = %d",i);
    return 0;
}
