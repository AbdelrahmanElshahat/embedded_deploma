//
// Created by shahat on 3/24/22.
//
#include<stdio.h>
typedef struct Scomplex{
    float real;
    float imaginary;
}complex_t;
complex_t Sum(complex_t n1,complex_t n2){
    complex_t sum;
    sum.real = n1.real + n2.real;
    sum.imaginary = n1.imaginary + n2.imaginary;
    return sum;
}
int main(){
    complex_t no1,no2,sum;
    printf("Enter 1st complex number real and imaginary respectively :");
    scanf("%f %f",&no1.real,&no1.imaginary);
    printf("Enter 2nd complex number real and imaginary respectively :");
    scanf("%f %f",&no2.real,&no2.imaginary);
    sum = Sum(no1,no2);
    printf("sum = %.1f + %.1f i",sum.real,sum.imaginary);
    return 0;
}