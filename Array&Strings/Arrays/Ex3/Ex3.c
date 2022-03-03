//
// Created by abdelrahmanelshahat on 03/03/2022.
//
#include <stdio.h>
int main(){
    int r,c,i,j;
    printf("Enter Matrix Dimensions:");
    scanf("%d %d",&r,&c);
    float Arr[r][c],trans[c][r];
    printf("Enter Matrix Elements:\n");
    for (i = 0;i<r;i++){
        for (j =0; j<c;j++){
            printf("Enter element Arr[%d][%d]:",i+1,j+1);
            scanf("%f",&Arr[i][j]);
        }
    }
    for (i = 0;i<r;i++){
        for (j =0; j<c;j++){
            printf("%.2f \t",Arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0;i<r;i++){
        for (j =0; j<c;j++){
           trans[j][i]=Arr[i][j];
        }
        printf("\n");
    }
    printf("Matrix Transpose:\n");
    for (i = 0;i<c;i++){
        for (j =0; j<r;j++){
            printf("%.2f \t",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
