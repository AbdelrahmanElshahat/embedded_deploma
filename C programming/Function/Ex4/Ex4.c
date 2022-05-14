//
// Created by shahat on 3/19/22.
//
#include <stdio.h>
int power(int base , int pow){
    if(pow != 0){
        return (base* power(base,pow-1));
    } else
        return 1;
}
int main(){
    int base,pow;
    printf("Enter base Number:");
    scanf("%d",&base);
    printf("Enter power number positive integer :");
    scanf("%d",&pow);
    printf("%d ^ %d = %d",base,pow, power(base,pow));
    return 0;
}

