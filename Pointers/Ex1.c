#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m = 29;
    int *ab = &m;
    printf("Adress of m : %x\nvalue of m : %d\n",&m,m);
    printf("Now ab is assigned with the address of m.\n");
    printf("Address of pointer ab :%x\nContent of pointer ab :%d\n",ab,*ab);
    *ab = 34;
    printf("Address of pointer ab :%x\nContent of pointer ab :%d\n",ab,*ab);
    return 0;
}
