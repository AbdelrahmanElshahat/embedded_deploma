//
// Created by shahat on 3/24/22.
//
#include <stdio.h>
typedef struct Sdistance{
    int feet;
    float inch;
}distance_t;
int main(){
    distance_t d1,d2,sum;
    printf("Enter information of 1st distance:\n");
    printf("Enter feet :");
    scanf("%d",&d1.feet);
    printf("Enter inch :");
    scanf("%f",&d1.inch);
    printf("Enter information of 2nd distance:\n");
    printf("Enter feet :");
    scanf("%d",&d2.feet);
    printf("Enter inch :");
    scanf("%f",&d2.inch);
    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;
    if(sum.inch>12.0){
        sum.inch-=12.0;
        ++sum.feet;
    }
    printf("Sum of distances = %d - '%.2f\"",sum.feet,sum.inch);
    return 0;
}
