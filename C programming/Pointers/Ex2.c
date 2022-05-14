#include<stdio.h>
int main(int argc, char const *argv[])
{
    char alpha[27];
    char *ptr = alpha;
   for (int i = 0; i < 26; i++)
   {
       *ptr = i + 'A';
       ptr++;
   }
   ptr = alpha;
   printf("The Alphabets are :\n");
   for (int i = 0; i < 26; i++)
   {
       printf("%c \t",*ptr+i);
       
   }
   
   
    return 0;
}
