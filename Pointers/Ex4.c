#include<stdio.h>
int main(int argc, char const *argv[])
{
    int Array[15];
    int n,i,*ptr = Array;
    printf("Input the number of elements to store in the array (max 15) :");
    scanf("%d",&n);
    printf("Input 5 number of elements in the array :\n");
    for(i = 0 ;i<n;i++){
        printf("element - %d :",i+1);
        scanf("%d",ptr+i);
    }
    for(i = n-1 ;i>=0;i--){
        printf("element - %d :%d\n",i+1,*(ptr+i));
        
    }


    return 0;
}
