//
// Created by shahat on 3/19/22.
//
#include <stdio.h>
void reverse(){
    char string;
    scanf("%c",&string);
    if(string != '\n')
    {
        reverse();
        printf("%c",string);
    }
}
int main(){
    printf("Enter sentence :");
    reverse();
    return 0;
}
