//
// Created by abdelrahmanelshahat on 02/03/2022.
//
#include <stdio.h>
int main(){
    float a[2][2];
    float b[2][2];
    int i,j;
    float sum[2][2];
    printf("Enter Elements of 1st Matrix :\n");
    for (i = 0; i<2;i++){
        for (j = 0;  j<2 ; j++) {
            printf("Enter a[%d][%d] :",i+1,j+1);
            scanf("%f",&a[i][j]);
        }
    }
    printf("Enter Elements of 2nd Matrix :\n");
    for (i = 0; i<2;i++){
        for (j = 0;  j<2 ; j++) {
            printf("Enter b[%d][%d] :",i+1,j+1);
            scanf("%f",&b[i][j]);
        }
    }

    for (i = 0; i<2;i++){
        for (j = 0;  j<2 ; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Sum of Matrix :\n");
    for (i = 0; i<2;i++){
        for (j = 0;  j<2 ; j++) {
            printf("%.2f \t ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
