//
// Created by abdelrahmanelshahat on 03/03/2022.
//
#include <stdio.h>
#include <string.h>
int main(){
    char character;
    char text[20] ;
    int i,freq=0;
    printf("Enter a string :");
    gets(text);
    printf("Enter character to find Frequency :");
    scanf("%c",&character);
    for(i = 0 ; i< strlen(text); i++){
        if(character == text[i])
            ++freq;
    }
    printf("frequency of %c = %d",character,freq);
    return 0;
}
