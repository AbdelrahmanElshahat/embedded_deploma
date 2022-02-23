//
// Created by abdelrahmanelshahat on 23/02/2022.
//
#include <stdio.h>
int main(){
    char x;
    printf("Enter character :");
    scanf("%c",&x);
    switch (x) {
        case 97 ... 122:
            printf("%c is alphabet",x);
            break;
        case 65 ... 90:
            printf("%c is alphabet",x);
            break;
        default:
            printf("%c is not alphabet",x);
            break;
    }

    return 0;
}