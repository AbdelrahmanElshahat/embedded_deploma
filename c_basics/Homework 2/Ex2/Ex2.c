//
// Created by abdelrahmanelshahat on 23/02/2022.
//
#include <stdio.h>
int main(){
    char x;
    printf("Enter an alphabet :");
    scanf("%c",&x);
    switch (x) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel",x);
            break;
        default:
            printf("%c is not a vowel",x);
            break;

    }
    return 0;
}
