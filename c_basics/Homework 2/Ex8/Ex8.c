//
// Created by abdelrahmanelshahat on 23/02/2022.
//
#include <stdio.h>
int main(){
    float op1,op2;
    char operation;
    printf("Enter operation either + or - or * or divide :");
    scanf("%c",&operation);
    printf("Enter 2 operands :");
    scanf("%f %f",&op1,&op2);
    switch (operation) {
        case '+':
            printf("%.1f %c %.1f = %.1f",op1,operation,op2,op1+op2);
            break;
        case '-':
            printf("%.1f %c %.1f = %.1f",op1,operation,op2,op1-op2);
            break;
        case '*':
            printf("%.1f %c %.1f = %.1f",op1,operation,op2,op1*op2);
            break;
        case '/':
            printf("%.1f %c %.1f = %.1f",op1,operation,op2,op1/op2);
            break;
    }
    return 0;
}